// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_interface:msg/MissionWaypoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__MISSION_WAYPOINT__STRUCT_HPP_
#define PX4_INTERFACE__MSG__DETAIL__MISSION_WAYPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_interface__msg__MissionWaypoint __attribute__((deprecated))
#else
# define DEPRECATED__px4_interface__msg__MissionWaypoint __declspec(deprecated)
#endif

namespace px4_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionWaypoint_
{
  using Type = MissionWaypoint_<ContainerAllocator>;

  explicit MissionWaypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq = 0ul;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->hold_time = 0.0f;
    }
  }

  explicit MissionWaypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq = 0ul;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->hold_time = 0.0f;
    }
  }

  // field types and members
  using _seq_type =
    uint32_t;
  _seq_type seq;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _alt_type =
    float;
  _alt_type alt;
  using _hold_time_type =
    float;
  _hold_time_type hold_time;

  // setters for named parameter idiom
  Type & set__seq(
    const uint32_t & _arg)
  {
    this->seq = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__alt(
    const float & _arg)
  {
    this->alt = _arg;
    return *this;
  }
  Type & set__hold_time(
    const float & _arg)
  {
    this->hold_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_interface::msg::MissionWaypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_interface::msg::MissionWaypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_interface::msg::MissionWaypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_interface::msg::MissionWaypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_interface::msg::MissionWaypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_interface::msg::MissionWaypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_interface::msg::MissionWaypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_interface::msg::MissionWaypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_interface::msg::MissionWaypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_interface::msg::MissionWaypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_interface__msg__MissionWaypoint
    std::shared_ptr<px4_interface::msg::MissionWaypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_interface__msg__MissionWaypoint
    std::shared_ptr<px4_interface::msg::MissionWaypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionWaypoint_ & other) const
  {
    if (this->seq != other.seq) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->alt != other.alt) {
      return false;
    }
    if (this->hold_time != other.hold_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionWaypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionWaypoint_

// alias to use template instance with default allocator
using MissionWaypoint =
  px4_interface::msg::MissionWaypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_interface

#endif  // PX4_INTERFACE__MSG__DETAIL__MISSION_WAYPOINT__STRUCT_HPP_
