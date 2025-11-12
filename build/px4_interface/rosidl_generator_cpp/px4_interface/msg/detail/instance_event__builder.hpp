// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_interface:msg/InstanceEvent.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__INSTANCE_EVENT__BUILDER_HPP_
#define PX4_INTERFACE__MSG__DETAIL__INSTANCE_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_interface/msg/detail/instance_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_interface
{

namespace msg
{

namespace builder
{

class Init_InstanceEvent_timestamp
{
public:
  explicit Init_InstanceEvent_timestamp(::px4_interface::msg::InstanceEvent & msg)
  : msg_(msg)
  {}
  ::px4_interface::msg::InstanceEvent timestamp(::px4_interface::msg::InstanceEvent::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_interface::msg::InstanceEvent msg_;
};

class Init_InstanceEvent_event
{
public:
  explicit Init_InstanceEvent_event(::px4_interface::msg::InstanceEvent & msg)
  : msg_(msg)
  {}
  Init_InstanceEvent_timestamp event(::px4_interface::msg::InstanceEvent::_event_type arg)
  {
    msg_.event = std::move(arg);
    return Init_InstanceEvent_timestamp(msg_);
  }

private:
  ::px4_interface::msg::InstanceEvent msg_;
};

class Init_InstanceEvent_drone_id
{
public:
  Init_InstanceEvent_drone_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InstanceEvent_event drone_id(::px4_interface::msg::InstanceEvent::_drone_id_type arg)
  {
    msg_.drone_id = std::move(arg);
    return Init_InstanceEvent_event(msg_);
  }

private:
  ::px4_interface::msg::InstanceEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_interface::msg::InstanceEvent>()
{
  return px4_interface::msg::builder::Init_InstanceEvent_drone_id();
}

}  // namespace px4_interface

#endif  // PX4_INTERFACE__MSG__DETAIL__INSTANCE_EVENT__BUILDER_HPP_
