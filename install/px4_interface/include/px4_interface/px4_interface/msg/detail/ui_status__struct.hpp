// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_interface:msg/UIStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__UI_STATUS__STRUCT_HPP_
#define PX4_INTERFACE__MSG__DETAIL__UI_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_interface__msg__UIStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_interface__msg__UIStatus __declspec(deprecated)
#endif

namespace px4_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UIStatus_
{
  using Type = UIStatus_<ContainerAllocator>;

  explicit UIStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
    }
  }

  explicit UIStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _drone_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _drone_ids_type drone_ids;
  using _heartbeats_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _heartbeats_type heartbeats;
  using _battery_percentages_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _battery_percentages_type battery_percentages;
  using _flight_readies_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _flight_readies_type flight_readies;
  using _armeds_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _armeds_type armeds;
  using _status_in_flights_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _status_in_flights_type status_in_flights;
  using _latitudes_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _latitudes_type latitudes;
  using _longitudes_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _longitudes_type longitudes;
  using _heading_degs_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _heading_degs_type heading_degs;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__drone_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->drone_ids = _arg;
    return *this;
  }
  Type & set__heartbeats(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->heartbeats = _arg;
    return *this;
  }
  Type & set__battery_percentages(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->battery_percentages = _arg;
    return *this;
  }
  Type & set__flight_readies(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->flight_readies = _arg;
    return *this;
  }
  Type & set__armeds(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->armeds = _arg;
    return *this;
  }
  Type & set__status_in_flights(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->status_in_flights = _arg;
    return *this;
  }
  Type & set__latitudes(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->latitudes = _arg;
    return *this;
  }
  Type & set__longitudes(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->longitudes = _arg;
    return *this;
  }
  Type & set__heading_degs(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->heading_degs = _arg;
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
    px4_interface::msg::UIStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_interface::msg::UIStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_interface::msg::UIStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_interface::msg::UIStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_interface::msg::UIStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_interface::msg::UIStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_interface::msg::UIStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_interface::msg::UIStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_interface::msg::UIStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_interface::msg::UIStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_interface__msg__UIStatus
    std::shared_ptr<px4_interface::msg::UIStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_interface__msg__UIStatus
    std::shared_ptr<px4_interface::msg::UIStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UIStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->drone_ids != other.drone_ids) {
      return false;
    }
    if (this->heartbeats != other.heartbeats) {
      return false;
    }
    if (this->battery_percentages != other.battery_percentages) {
      return false;
    }
    if (this->flight_readies != other.flight_readies) {
      return false;
    }
    if (this->armeds != other.armeds) {
      return false;
    }
    if (this->status_in_flights != other.status_in_flights) {
      return false;
    }
    if (this->latitudes != other.latitudes) {
      return false;
    }
    if (this->longitudes != other.longitudes) {
      return false;
    }
    if (this->heading_degs != other.heading_degs) {
      return false;
    }
    return true;
  }
  bool operator!=(const UIStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UIStatus_

// alias to use template instance with default allocator
using UIStatus =
  px4_interface::msg::UIStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UIStatus_<ContainerAllocator>::FLIGHT_STATUS_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UIStatus_<ContainerAllocator>::FLIGHT_STATUS_WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UIStatus_<ContainerAllocator>::FLIGHT_STATUS_DANGER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_interface

#endif  // PX4_INTERFACE__MSG__DETAIL__UI_STATUS__STRUCT_HPP_
