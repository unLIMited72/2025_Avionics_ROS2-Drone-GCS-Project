// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_interface:msg/InstanceEvent.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__INSTANCE_EVENT__STRUCT_HPP_
#define PX4_INTERFACE__MSG__DETAIL__INSTANCE_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_interface__msg__InstanceEvent __attribute__((deprecated))
#else
# define DEPRECATED__px4_interface__msg__InstanceEvent __declspec(deprecated)
#endif

namespace px4_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InstanceEvent_
{
  using Type = InstanceEvent_<ContainerAllocator>;

  explicit InstanceEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = "";
      this->event = "";
      this->timestamp = 0ull;
    }
  }

  explicit InstanceEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : drone_id(_alloc),
    event(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = "";
      this->event = "";
      this->timestamp = 0ull;
    }
  }

  // field types and members
  using _drone_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _drone_id_type drone_id;
  using _event_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _event_type event;
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__drone_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->drone_id = _arg;
    return *this;
  }
  Type & set__event(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->event = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_interface::msg::InstanceEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_interface::msg::InstanceEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_interface::msg::InstanceEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_interface::msg::InstanceEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_interface::msg::InstanceEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_interface::msg::InstanceEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_interface::msg::InstanceEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_interface::msg::InstanceEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_interface::msg::InstanceEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_interface::msg::InstanceEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_interface__msg__InstanceEvent
    std::shared_ptr<px4_interface::msg::InstanceEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_interface__msg__InstanceEvent
    std::shared_ptr<px4_interface::msg::InstanceEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InstanceEvent_ & other) const
  {
    if (this->drone_id != other.drone_id) {
      return false;
    }
    if (this->event != other.event) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const InstanceEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InstanceEvent_

// alias to use template instance with default allocator
using InstanceEvent =
  px4_interface::msg::InstanceEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_interface

#endif  // PX4_INTERFACE__MSG__DETAIL__INSTANCE_EVENT__STRUCT_HPP_
