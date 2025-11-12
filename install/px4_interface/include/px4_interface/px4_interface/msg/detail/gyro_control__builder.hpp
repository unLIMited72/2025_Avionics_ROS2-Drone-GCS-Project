// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_interface:msg/GyroControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__GYRO_CONTROL__BUILDER_HPP_
#define PX4_INTERFACE__MSG__DETAIL__GYRO_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_interface/msg/detail/gyro_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_interface
{

namespace msg
{

namespace builder
{

class Init_GyroControl_vy_mps
{
public:
  explicit Init_GyroControl_vy_mps(::px4_interface::msg::GyroControl & msg)
  : msg_(msg)
  {}
  ::px4_interface::msg::GyroControl vy_mps(::px4_interface::msg::GyroControl::_vy_mps_type arg)
  {
    msg_.vy_mps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_interface::msg::GyroControl msg_;
};

class Init_GyroControl_vx_mps
{
public:
  explicit Init_GyroControl_vx_mps(::px4_interface::msg::GyroControl & msg)
  : msg_(msg)
  {}
  Init_GyroControl_vy_mps vx_mps(::px4_interface::msg::GyroControl::_vx_mps_type arg)
  {
    msg_.vx_mps = std::move(arg);
    return Init_GyroControl_vy_mps(msg_);
  }

private:
  ::px4_interface::msg::GyroControl msg_;
};

class Init_GyroControl_yaw_deg
{
public:
  explicit Init_GyroControl_yaw_deg(::px4_interface::msg::GyroControl & msg)
  : msg_(msg)
  {}
  Init_GyroControl_vx_mps yaw_deg(::px4_interface::msg::GyroControl::_yaw_deg_type arg)
  {
    msg_.yaw_deg = std::move(arg);
    return Init_GyroControl_vx_mps(msg_);
  }

private:
  ::px4_interface::msg::GyroControl msg_;
};

class Init_GyroControl_target_altitude_m
{
public:
  explicit Init_GyroControl_target_altitude_m(::px4_interface::msg::GyroControl & msg)
  : msg_(msg)
  {}
  Init_GyroControl_yaw_deg target_altitude_m(::px4_interface::msg::GyroControl::_target_altitude_m_type arg)
  {
    msg_.target_altitude_m = std::move(arg);
    return Init_GyroControl_yaw_deg(msg_);
  }

private:
  ::px4_interface::msg::GyroControl msg_;
};

class Init_GyroControl_command
{
public:
  explicit Init_GyroControl_command(::px4_interface::msg::GyroControl & msg)
  : msg_(msg)
  {}
  Init_GyroControl_target_altitude_m command(::px4_interface::msg::GyroControl::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_GyroControl_target_altitude_m(msg_);
  }

private:
  ::px4_interface::msg::GyroControl msg_;
};

class Init_GyroControl_drone_id
{
public:
  Init_GyroControl_drone_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GyroControl_command drone_id(::px4_interface::msg::GyroControl::_drone_id_type arg)
  {
    msg_.drone_id = std::move(arg);
    return Init_GyroControl_command(msg_);
  }

private:
  ::px4_interface::msg::GyroControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_interface::msg::GyroControl>()
{
  return px4_interface::msg::builder::Init_GyroControl_drone_id();
}

}  // namespace px4_interface

#endif  // PX4_INTERFACE__MSG__DETAIL__GYRO_CONTROL__BUILDER_HPP_
