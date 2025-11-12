// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_interface:msg/MissionCommand.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__MISSION_COMMAND__STRUCT_HPP_
#define PX4_INTERFACE__MSG__DETAIL__MISSION_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_interface__msg__MissionCommand __attribute__((deprecated))
#else
# define DEPRECATED__px4_interface__msg__MissionCommand __declspec(deprecated)
#endif

namespace px4_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionCommand_
{
  using Type = MissionCommand_<ContainerAllocator>;

  explicit MissionCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = "";
      this->command = 0;
    }
  }

  explicit MissionCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = "";
      this->command = 0;
    }
  }

  // field types and members
  using _mission_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_id_type mission_id;
  using _command_type =
    uint8_t;
  _command_type command;

  // setters for named parameter idiom
  Type & set__mission_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CMD_START =
    0u;
  static constexpr uint8_t CMD_PAUSE =
    1u;
  static constexpr uint8_t CMD_RESUME =
    2u;
  static constexpr uint8_t CMD_EMERGENCY_RETURN =
    3u;
  static constexpr uint8_t CMD_ABORT =
    4u;

  // pointer types
  using RawPtr =
    px4_interface::msg::MissionCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_interface::msg::MissionCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_interface::msg::MissionCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_interface::msg::MissionCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_interface::msg::MissionCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_interface::msg::MissionCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_interface::msg::MissionCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_interface::msg::MissionCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_interface::msg::MissionCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_interface::msg::MissionCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_interface__msg__MissionCommand
    std::shared_ptr<px4_interface::msg::MissionCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_interface__msg__MissionCommand
    std::shared_ptr<px4_interface::msg::MissionCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionCommand_ & other) const
  {
    if (this->mission_id != other.mission_id) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionCommand_

// alias to use template instance with default allocator
using MissionCommand =
  px4_interface::msg::MissionCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionCommand_<ContainerAllocator>::CMD_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionCommand_<ContainerAllocator>::CMD_PAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionCommand_<ContainerAllocator>::CMD_RESUME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionCommand_<ContainerAllocator>::CMD_EMERGENCY_RETURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionCommand_<ContainerAllocator>::CMD_ABORT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_interface

#endif  // PX4_INTERFACE__MSG__DETAIL__MISSION_COMMAND__STRUCT_HPP_
