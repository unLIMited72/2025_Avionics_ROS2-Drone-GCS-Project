#include <rclcpp/rclcpp.hpp>
#include <px4_interface/msg/gyro_control.hpp>
#include <px4_msgs/msg/offboard_control_mode.hpp>
#include <px4_msgs/msg/trajectory_setpoint.hpp>
#include <px4_msgs/msg/vehicle_command.hpp>
#include <px4_msgs/msg/vehicle_status.hpp>
#include <px4_msgs/msg/vehicle_local_position.hpp>

using px4_interface::msg::GyroControl;
using px4_msgs::msg::OffboardControlMode;
using px4_msgs::msg::TrajectorySetpoint;
using px4_msgs::msg::VehicleCommand;
using px4_msgs::msg::VehicleStatus;
using px4_msgs::msg::VehicleLocalPosition;

class GyroOffboardController : public rclcpp::Node
{
public:
  GyroOffboardController()
  : Node("gyro_offboard_controller")
  {
    drone_id_ = declare_parameter<std::string>("drone_id", "px4_0");
    px4_ns_   = declare_parameter<std::string>("px4_ns", "px4_0");

    auto gcs_qos     = rclcpp::QoS(rclcpp::KeepLast(10)).reliable();
    auto px4_out_qos = rclcpp::SensorDataQoS();
    auto px4_in_qos  = rclcpp::QoS(rclcpp::KeepLast(10)).reliable();

    using std::placeholders::_1;

    gyro_sub_ = create_subscription<GyroControl>(
      "/gcs/gyro_control", gcs_qos,
      std::bind(&GyroOffboardController::onGyroCommand, this, _1));

    vs_sub_ = create_subscription<VehicleStatus>(
      ns("/fmu/out/vehicle_status_v1"), px4_out_qos,
      std::bind(&GyroOffboardController::onVehicleStatus, this, _1));

    pos_sub_ = create_subscription<VehicleLocalPosition>(
      ns("/fmu/out/vehicle_local_position_v1"), px4_out_qos,
      std::bind(&GyroOffboardController::onLocalPosition, this, _1));

    offboard_pub_ = create_publisher<OffboardControlMode>(
      ns("/fmu/in/offboard_control_mode"), px4_in_qos);

    traj_pub_ = create_publisher<TrajectorySetpoint>(
      ns("/fmu/in/trajectory_setpoint"), px4_in_qos);

    cmd_pub_ = create_publisher<VehicleCommand>(
      ns("/fmu/in/vehicle_command"), px4_in_qos);

    using namespace std::chrono_literals;
    timer_ = create_wall_timer(50ms, std::bind(&GyroOffboardController::onTimer, this));

    RCLCPP_INFO(get_logger(), "GyroOffboardController for drone_id=%s ns=%s started.", drone_id_.c_str(), px4_ns_.c_str());
  }

private:
  enum class State {
    IDLE,
    OFFBOARD_WARMUP,
    TAKEOFF_ASCEND,
    FLYING,
    LANDING
  };

  std::string ns(const std::string &topic) const {
    if (topic.empty() || topic[0] != '/') return "/" + px4_ns_ + "/" + topic;
    return "/" + px4_ns_ + topic;
  }

  uint64_t now_u() const { return now().nanoseconds() / 1000; }

  void onGyroCommand(const GyroControl::SharedPtr msg)
  {
    if (msg->drone_id != drone_id_) return;

    switch (msg->command) {
      case GyroControl::COMMAND_TAKEOFF: handleTakeoffCmd(msg->target_altitude_m); break;
      case GyroControl::COMMAND_LAND: handleLandCmd(); break;
      case GyroControl::COMMAND_CONTROL: handleControlCmd(msg->vx_mps, msg->vy_mps, msg->yaw_deg); break;
    }
  }

  void onVehicleStatus(const VehicleStatus::SharedPtr msg)
  {
    vs_ = *msg;
    has_vs_ = true;

    if (state_ == State::LANDING && vs_.arming_state == VehicleStatus::ARMING_STATE_DISARMED) {
      RCLCPP_INFO(get_logger(), "[%s] Landing complete -> IDLE", drone_id_.c_str());
      state_ = State::IDLE;
    }
  }

  void onLocalPosition(const VehicleLocalPosition::SharedPtr msg)
  {
    lp_ = *msg;
    has_lp_ = true;
  }

  void handleTakeoffCmd(float target_alt)
  {
    if (!has_vs_) {
      RCLCPP_WARN(get_logger(), "[%s] TAKEOFF ignored: no VehicleStatus yet", drone_id_.c_str());
      return;
    }

    if (state_ != State::IDLE) {
      RCLCPP_WARN(get_logger(), "[%s] TAKEOFF ignored: state != IDLE", drone_id_.c_str());
      return;
    }

    target_alt_ = (target_alt > 0.f) ? target_alt : 5.f;
    warmup_count_ = 0;
    state_ = State::OFFBOARD_WARMUP;
    RCLCPP_INFO(get_logger(), "[%s] TAKEOFF requested to %.1fm", drone_id_.c_str(), target_alt_);
  }

  void handleLandCmd()
  {
    if (state_ == State::IDLE) return;

    RCLCPP_INFO(get_logger(), "[%s] LAND requested", drone_id_.c_str());
    sendVehicleCommand(VehicleCommand::VEHICLE_CMD_NAV_LAND);
    state_ = State::LANDING;
  }

  void handleControlCmd(float vx, float vy, float yaw_deg)
  {
    if (state_ != State::FLYING) {
      return;
    }
    cmd_vx_ = vx;
    cmd_vy_ = vy;
    cmd_yaw_rad_ = yaw_deg * M_PI / 180.0f;
  }

  void onTimer()
  {
    if (!has_vs_ || !has_lp_) return;

    switch (state_) {
      case State::IDLE:
        break;

      case State::OFFBOARD_WARMUP:
        publishOffboard(true);
        publishZeroSetpoint();
        if (++warmup_count_ > 20) {
          armAndOffboard();
          state_ = State::TAKEOFF_ASCEND;
        }
        break;

      case State::TAKEOFF_ASCEND:
        publishOffboard(true);
        doAscend();
        break;

      case State::FLYING:
        publishOffboard(true);
        doFlying();
        break;

      case State::LANDING:
        publishOffboard(false);
        break;
    }
  }

  void publishOffboard(bool vel)
  {
    OffboardControlMode msg{};
    msg.timestamp = now_u();
    msg.position = false;
    msg.velocity = vel;
    msg.acceleration = false;
    msg.attitude = false;
    msg.body_rate = false;
    msg.thrust_and_torque = false;
    msg.direct_actuator = false;
    offboard_pub_->publish(msg);
  }

  void publishZeroSetpoint()
  {
    TrajectorySetpoint sp{};
    sp.timestamp = now_u();
    sp.position = {NAN, NAN, NAN};
    sp.velocity = {0.f, 0.f, 0.f};
    sp.yaw = last_yaw_;
    traj_pub_->publish(sp);
  }

  void armAndOffboard()
  {
    sendVehicleCommand(VehicleCommand::VEHICLE_CMD_COMPONENT_ARM_DISARM, 1.0f);
    sendVehicleCommand(VehicleCommand::VEHICLE_CMD_DO_SET_MODE, 1.0f, 6.0f); 
    RCLCPP_INFO(get_logger(), "[%s] Armed + OFFBOARD", drone_id_.c_str());
  }

  void doAscend()
  {
    const float cur_z = lp_.z;           
    const float target_z = -target_alt_;

    float dz = target_z - cur_z;
    const float tol = 0.5f;

    if (std::fabs(dz) < tol) {
      RCLCPP_INFO(get_logger(), "[%s] Takeoff reached alt -> FLYING", drone_id_.c_str());
      state_ = State::FLYING;
      cmd_vx_ = 0.f;
      cmd_vy_ = 0.f;
      return;
    }

    float vz = (dz > 0.f) ? 1.0f : -1.0f;
    TrajectorySetpoint sp{};
    sp.timestamp = now_u();
    sp.position = {NAN, NAN, NAN};
    sp.velocity = {0.f, 0.f, vz};
    sp.yaw = last_yaw_;
    traj_pub_->publish(sp);
  }

  void doFlying()
  {
    TrajectorySetpoint sp{};
    sp.timestamp = now_u();
    sp.position = {NAN, NAN, NAN};
    sp.velocity = {cmd_vx_, cmd_vy_, 0.f};
    sp.yaw = cmd_yaw_rad_;
    last_yaw_ = sp.yaw;
    traj_pub_->publish(sp);
  }

  void sendVehicleCommand(uint16_t command,
                          float p1 = 0.f, float p2 = 0.f,
                          float p3 = 0.f, float p4 = 0.f,
                          float p5 = 0.f, float p6 = 0.f,
                          float p7 = 0.f)
  {
    VehicleCommand cmd{};
    cmd.timestamp = now_u();
    cmd.param1 = p1;
    cmd.param2 = p2;
    cmd.param3 = p3;
    cmd.param4 = p4;
    cmd.param5 = p5;
    cmd.param6 = p6;
    cmd.param7 = p7;
    cmd.command = command;
    cmd.target_system = 1;
    cmd.target_component = 1;
    cmd.source_system = 1;
    cmd.source_component = 1;
    cmd.from_external = true;
    cmd_pub_->publish(cmd);
  }

  std::string drone_id_;
  std::string px4_ns_;

  rclcpp::Subscription<GyroControl>::SharedPtr      gyro_sub_;
  rclcpp::Subscription<VehicleStatus>::SharedPtr    vs_sub_;
  rclcpp::Subscription<VehicleLocalPosition>::SharedPtr pos_sub_;
  rclcpp::Publisher<OffboardControlMode>::SharedPtr offboard_pub_;
  rclcpp::Publisher<TrajectorySetpoint>::SharedPtr  traj_pub_;
  rclcpp::Publisher<VehicleCommand>::SharedPtr      cmd_pub_;
  rclcpp::TimerBase::SharedPtr                      timer_;

  VehicleStatus vs_{};
  VehicleLocalPosition lp_{};
  bool has_vs_{false};
  bool has_lp_{false};

  State state_{State::IDLE};
  int   warmup_count_{0};
  float target_alt_{5.f};

  float cmd_vx_{0.f};
  float cmd_vy_{0.f};
  float cmd_yaw_rad_{0.f};
  float last_yaw_{0.f};
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<GyroOffboardController>());
  rclcpp::shutdown();
  return 0;
}
