// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_interface:msg/PX4Status.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__PX4_STATUS__STRUCT_HPP_
#define PX4_INTERFACE__MSG__DETAIL__PX4_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_interface__msg__PX4Status __attribute__((deprecated))
#else
# define DEPRECATED__px4_interface__msg__PX4Status __declspec(deprecated)
#endif

namespace px4_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PX4Status_
{
  using Type = PX4Status_<ContainerAllocator>;

  explicit PX4Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->drone_id = "";
      this->heartbeat = false;
      this->battery_percentage = 0.0f;
      this->flight_ready = false;
      this->armed = false;
      this->status_in_flight = 0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->heading_deg = 0.0f;
    }
  }

  explicit PX4Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : drone_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->drone_id = "";
      this->heartbeat = false;
      this->battery_percentage = 0.0f;
      this->flight_ready = false;
      this->armed = false;
      this->status_in_flight = 0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->heading_deg = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _drone_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _drone_id_type drone_id;
  using _heartbeat_type =
    bool;
  _heartbeat_type heartbeat;
  using _battery_percentage_type =
    float;
  _battery_percentage_type battery_percentage;
  using _flight_ready_type =
    bool;
  _flight_ready_type flight_ready;
  using _armed_type =
    bool;
  _armed_type armed;
  using _status_in_flight_type =
    uint8_t;
  _status_in_flight_type status_in_flight;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _heading_deg_type =
    float;
  _heading_deg_type heading_deg;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__drone_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->drone_id = _arg;
    return *this;
  }
  Type & set__heartbeat(
    const bool & _arg)
  {
    this->heartbeat = _arg;
    return *this;
  }
  Type & set__battery_percentage(
    const float & _arg)
  {
    this->battery_percentage = _arg;
    return *this;
  }
  Type & set__flight_ready(
    const bool & _arg)
  {
    this->flight_ready = _arg;
    return *this;
  }
  Type & set__armed(
    const bool & _arg)
  {
    this->armed = _arg;
    return *this;
  }
  Type & set__status_in_flight(
    const uint8_t & _arg)
  {
    this->status_in_flight = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__heading_deg(
    const float & _arg)
  {
    this->heading_deg = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FLIGHT_STATUS_NORMAL =
    0u;
  static constexpr uint8_t FLIGHT_STATUS_WARNING =
    1u;
  static constexpr uint8_t FLIGHT_STATUS_DANGER =
    2u;

  // pointer types
  using RawPtr =
    px4_interface::msg::PX4Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_interface::msg::PX4Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_interface::msg::PX4Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_interface::msg::PX4Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_interface::msg::PX4Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_interface::msg::PX4Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_interface::msg::PX4Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_interface::msg::PX4Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_interface::msg::PX4Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_interface::msg::PX4Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_interface__msg__PX4Status
    std::shared_ptr<px4_interface::msg::PX4Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_interface__msg__PX4Status
    std::shared_ptr<px4_interface::msg::PX4Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PX4Status_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->drone_id != other.drone_id) {
      return false;
    }
    if (this->heartbeat != other.heartbeat) {
      return false;
    }
    if (this->battery_percentage != other.battery_percentage) {
      return false;
    }
    if (this->flight_ready != other.flight_ready) {
      return false;
    }
    if (this->armed != other.armed) {
      return false;
    }
    if (this->status_in_flight != other.status_in_flight) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->heading_deg != other.heading_deg) {
      return false;
    }
    return true;
  }
  bool operator!=(const PX4Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PX4Status_

// alias to use template instance with default allocator
using PX4Status =
  px4_interface::msg::PX4Status_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PX4Status_<ContainerAllocator>::FLIGHT_STATUS_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PX4Status_<ContainerAllocator>::FLIGHT_STATUS_WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PX4Status_<ContainerAllocator>::FLIGHT_STATUS_DANGER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_interface

#endif  // PX4_INTERFACE__MSG__DETAIL__PX4_STATUS__STRUCT_HPP_
