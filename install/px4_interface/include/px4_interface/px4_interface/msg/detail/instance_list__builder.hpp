// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_interface:msg/InstanceList.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__INSTANCE_LIST__BUILDER_HPP_
#define PX4_INTERFACE__MSG__DETAIL__INSTANCE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_interface/msg/detail/instance_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_interface
{

namespace msg
{

namespace builder
{

class Init_InstanceList_timestamp
{
public:
  explicit Init_InstanceList_timestamp(::px4_interface::msg::InstanceList & msg)
  : msg_(msg)
  {}
  ::px4_interface::msg::InstanceList timestamp(::px4_interface::msg::InstanceList::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_interface::msg::InstanceList msg_;
};

class Init_InstanceList_drone_ids
{
public:
  Init_InstanceList_drone_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InstanceList_timestamp drone_ids(::px4_interface::msg::InstanceList::_drone_ids_type arg)
  {
    msg_.drone_ids = std::move(arg);
    return Init_InstanceList_timestamp(msg_);
  }

private:
  ::px4_interface::msg::InstanceList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_interface::msg::InstanceList>()
{
  return px4_interface::msg::builder::Init_InstanceList_drone_ids();
}

}  // namespace px4_interface

#endif  // PX4_INTERFACE__MSG__DETAIL__INSTANCE_LIST__BUILDER_HPP_
