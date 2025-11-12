// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_interface:msg/MissionCommand.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__MISSION_COMMAND__BUILDER_HPP_
#define PX4_INTERFACE__MSG__DETAIL__MISSION_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_interface/msg/detail/mission_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_interface
{

namespace msg
{

namespace builder
{

class Init_MissionCommand_command
{
public:
  explicit Init_MissionCommand_command(::px4_interface::msg::MissionCommand & msg)
  : msg_(msg)
  {}
  ::px4_interface::msg::MissionCommand command(::px4_interface::msg::MissionCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_interface::msg::MissionCommand msg_;
};

class Init_MissionCommand_mission_id
{
public:
  Init_MissionCommand_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionCommand_command mission_id(::px4_interface::msg::MissionCommand::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_MissionCommand_command(msg_);
  }

private:
  ::px4_interface::msg::MissionCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_interface::msg::MissionCommand>()
{
  return px4_interface::msg::builder::Init_MissionCommand_mission_id();
}

}  // namespace px4_interface

#endif  // PX4_INTERFACE__MSG__DETAIL__MISSION_COMMAND__BUILDER_HPP_
