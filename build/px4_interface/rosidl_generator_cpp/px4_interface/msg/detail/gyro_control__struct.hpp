// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_interface:msg/GyroControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__GYRO_CONTROL__STRUCT_HPP_
#define PX4_INTERFACE__MSG__DETAIL__GYRO_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_interface__msg__GyroControl __attribute__((deprecated))
#else
# define DEPRECATED__px4_interface__msg__GyroControl __declspec(deprecated)
#endif

namespace px4_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GyroControl_
{
  using Type = GyroControl_<ContainerAllocator>;

  explicit GyroControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = "";
      this->command = 0;
      this->target_altitude_m = 0.0f;
      this->yaw_deg = 0.0f;
      this->vx_mps = 0.0f;
      this->vy_mps = 0.0f;
    }
  }

  explicit GyroControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : drone_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = "";
      this->command = 0;
      this->target_altitude_m = 0.0f;
      this->yaw_deg = 0.0f;
      this->vx_mps = 0.0f;
      this->vy_mps = 0.0f;
    }
  }

  // field types and members
  using _drone_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _drone_id_type drone_id;
  using _command_type =
    uint8_t;
  _command_type command;
  using _target_altitude_m_type =
    float;
  _target_altitude_m_type target_altitude_m;
  using _yaw_deg_type =
    float;
  _yaw_deg_type yaw_deg;
  using _vx_mps_type =
    float;
  _vx_mps_type vx_mps;
  using _vy_mps_type =
    float;
  _vy_mps_type vy_mps;

  // setters for named parameter idiom
  Type & set__drone_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->drone_id = _arg;
    return *this;
  }
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__target_altitude_m(
    const float & _arg)
  {
    this->target_altitude_m = _arg;
    return *this;
  }
  Type & set__yaw_deg(
    const float & _arg)
  {
    this->yaw_deg = _arg;
    return *this;
  }
  Type & set__vx_mps(
    const float & _arg)
  {
    this->vx_mps = _arg;
    return *this;
  }
  Type & set__vy_mps(
    const float & _arg)
  {
    this->vy_mps = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t COMMAND_CONTROL =
    0u;
  static constexpr uint8_t COMMAND_TAKEOFF =
    1u;
  static constexpr uint8_t COMMAND_LAND =
    2u;

  // pointer types
  using RawPtr =
    px4_interface::msg::GyroControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_interface::msg::GyroControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_interface::msg::GyroControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_interface::msg::GyroControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_interface::msg::GyroControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_interface::msg::GyroControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_interface::msg::GyroControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_interface::msg::GyroControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_interface::msg::GyroControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_interface::msg::GyroControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_interface__msg__GyroControl
    std::shared_ptr<px4_interface::msg::GyroControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_interface__msg__GyroControl
    std::shared_ptr<px4_interface::msg::GyroControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GyroControl_ & other) const
  {
    if (this->drone_id != other.drone_id) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->target_altitude_m != other.target_altitude_m) {
      return false;
    }
    if (this->yaw_deg != other.yaw_deg) {
      return false;
    }
    if (this->vx_mps != other.vx_mps) {
      return false;
    }
    if (this->vy_mps != other.vy_mps) {
      return false;
    }
    return true;
  }
  bool operator!=(const GyroControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GyroControl_

// alias to use template instance with default allocator
using GyroControl =
  px4_interface::msg::GyroControl_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GyroControl_<ContainerAllocator>::COMMAND_CONTROL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GyroControl_<ContainerAllocator>::COMMAND_TAKEOFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GyroControl_<ContainerAllocator>::COMMAND_LAND;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_interface

#endif  // PX4_INTERFACE__MSG__DETAIL__GYRO_CONTROL__STRUCT_HPP_
