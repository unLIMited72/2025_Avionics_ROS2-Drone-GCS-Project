// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_interface:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
#define PX4_INTERFACE__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_interface/msg/detail/mission_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_interface
{

namespace msg
{

namespace builder
{

class Init_MissionStatus_drone_ids
{
public:
  explicit Init_MissionStatus_drone_ids(::px4_interface::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  ::px4_interface::msg::MissionStatus drone_ids(::px4_interface::msg::MissionStatus::_drone_ids_type arg)
  {
    msg_.drone_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_interface::msg::MissionStatus msg_;
};

class Init_MissionStatus_state
{
public:
  explicit Init_MissionStatus_state(::px4_interface::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  Init_MissionStatus_drone_ids state(::px4_interface::msg::MissionStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MissionStatus_drone_ids(msg_);
  }

private:
  ::px4_interface::msg::MissionStatus msg_;
};

class Init_MissionStatus_mission_id
{
public:
  Init_MissionStatus_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionStatus_state mission_id(::px4_interface::msg::MissionStatus::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_MissionStatus_state(msg_);
  }

private:
  ::px4_interface::msg::MissionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_interface::msg::MissionStatus>()
{
  return px4_interface::msg::builder::Init_MissionStatus_mission_id();
}

}  // namespace px4_interface

#endif  // PX4_INTERFACE__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
