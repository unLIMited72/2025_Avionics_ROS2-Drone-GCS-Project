// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_interface:msg/MissionPlanForDrone.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__MISSION_PLAN_FOR_DRONE__STRUCT_HPP_
#define PX4_INTERFACE__MSG__DETAIL__MISSION_PLAN_FOR_DRONE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoints'
#include "px4_interface/msg/detail/mission_waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__px4_interface__msg__MissionPlanForDrone __attribute__((deprecated))
#else
# define DEPRECATED__px4_interface__msg__MissionPlanForDrone __declspec(deprecated)
#endif

namespace px4_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionPlanForDrone_
{
  using Type = MissionPlanForDrone_<ContainerAllocator>;

  explicit MissionPlanForDrone_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = "";
      this->drone_id = "";
      this->cruise_altitude_m = 0.0f;
      this->cruise_speed_mps = 0.0f;
      this->landing_mode = 0;
      this->spacing_type = 0;
      this->spacing_value = 0.0f;
      this->sequential_launch = false;
      this->order_by_id = false;
      this->heading_to_next_wp = false;
    }
  }

  explicit MissionPlanForDrone_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_id(_alloc),
    drone_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = "";
      this->drone_id = "";
      this->cruise_altitude_m = 0.0f;
      this->cruise_speed_mps = 0.0f;
      this->landing_mode = 0;
      this->spacing_type = 0;
      this->spacing_value = 0.0f;
      this->sequential_launch = false;
      this->order_by_id = false;
      this->heading_to_next_wp = false;
    }
  }

  // field types and members
  using _mission_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_id_type mission_id;
  using _drone_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _drone_id_type drone_id;
  using _waypoints_type =
    std::vector<px4_interface::msg::MissionWaypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<px4_interface::msg::MissionWaypoint_<ContainerAllocator>>>;
  _waypoints_type waypoints;
  using _cruise_altitude_m_type =
    float;
  _cruise_altitude_m_type cruise_altitude_m;
  using _cruise_speed_mps_type =
    float;
  _cruise_speed_mps_type cruise_speed_mps;
  using _landing_mode_type =
    uint8_t;
  _landing_mode_type landing_mode;
  using _spacing_type_type =
    uint8_t;
  _spacing_type_type spacing_type;
  using _spacing_value_type =
    float;
  _spacing_value_type spacing_value;
  using _sequential_launch_type =
    bool;
  _sequential_launch_type sequential_launch;
  using _order_by_id_type =
    bool;
  _order_by_id_type order_by_id;
  using _heading_to_next_wp_type =
    bool;
  _heading_to_next_wp_type heading_to_next_wp;

  // setters for named parameter idiom
  Type & set__mission_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }
  Type & set__drone_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->drone_id = _arg;
    return *this;
  }
  Type & set__waypoints(
    const std::vector<px4_interface::msg::MissionWaypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<px4_interface::msg::MissionWaypoint_<ContainerAllocator>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }
  Type & set__cruise_altitude_m(
    const float & _arg)
  {
    this->cruise_altitude_m = _arg;
    return *this;
  }
  Type & set__cruise_speed_mps(
    const float & _arg)
  {
    this->cruise_speed_mps = _arg;
    return *this;
  }
  Type & set__landing_mode(
    const uint8_t & _arg)
  {
    this->landing_mode = _arg;
    return *this;
  }
  Type & set__spacing_type(
    const uint8_t & _arg)
  {
    this->spacing_type = _arg;
    return *this;
  }
  Type & set__spacing_value(
    const float & _arg)
  {
    this->spacing_value = _arg;
    return *this;
  }
  Type & set__sequential_launch(
    const bool & _arg)
  {
    this->sequential_launch = _arg;
    return *this;
  }
  Type & set__order_by_id(
    const bool & _arg)
  {
    this->order_by_id = _arg;
    return *this;
  }
  Type & set__heading_to_next_wp(
    const bool & _arg)
  {
    this->heading_to_next_wp = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LANDING_HOME =
    0u;
  static constexpr uint8_t LANDING_LAST_WAYPOINT =
    1u;
  static constexpr uint8_t SPACING_DISTANCE =
    0u;

  // pointer types
  using RawPtr =
    px4_interface::msg::MissionPlanForDrone_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_interface::msg::MissionPlanForDrone_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_interface::msg::MissionPlanForDrone_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_interface::msg::MissionPlanForDrone_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_interface::msg::MissionPlanForDrone_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_interface::msg::MissionPlanForDrone_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_interface::msg::MissionPlanForDrone_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_interface::msg::MissionPlanForDrone_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_interface::msg::MissionPlanForDrone_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_interface::msg::MissionPlanForDrone_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_interface__msg__MissionPlanForDrone
    std::shared_ptr<px4_interface::msg::MissionPlanForDrone_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_interface__msg__MissionPlanForDrone
    std::shared_ptr<px4_interface::msg::MissionPlanForDrone_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionPlanForDrone_ & other) const
  {
    if (this->mission_id != other.mission_id) {
      return false;
    }
    if (this->drone_id != other.drone_id) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    if (this->cruise_altitude_m != other.cruise_altitude_m) {
      return false;
    }
    if (this->cruise_speed_mps != other.cruise_speed_mps) {
      return false;
    }
    if (this->landing_mode != other.landing_mode) {
      return false;
    }
    if (this->spacing_type != other.spacing_type) {
      return false;
    }
    if (this->spacing_value != other.spacing_value) {
      return false;
    }
    if (this->sequential_launch != other.sequential_launch) {
      return false;
    }
    if (this->order_by_id != other.order_by_id) {
      return false;
    }
    if (this->heading_to_next_wp != other.heading_to_next_wp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionPlanForDrone_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionPlanForDrone_

// alias to use template instance with default allocator
using MissionPlanForDrone =
  px4_interface::msg::MissionPlanForDrone_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionPlanForDrone_<ContainerAllocator>::LANDING_HOME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionPlanForDrone_<ContainerAllocator>::LANDING_LAST_WAYPOINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionPlanForDrone_<ContainerAllocator>::SPACING_DISTANCE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_interface

#endif  // PX4_INTERFACE__MSG__DETAIL__MISSION_PLAN_FOR_DRONE__STRUCT_HPP_
