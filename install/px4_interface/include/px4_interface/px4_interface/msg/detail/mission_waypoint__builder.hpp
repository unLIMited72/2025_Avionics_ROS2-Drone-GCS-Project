// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_interface:msg/MissionWaypoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__MISSION_WAYPOINT__BUILDER_HPP_
#define PX4_INTERFACE__MSG__DETAIL__MISSION_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_interface/msg/detail/mission_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_interface
{

namespace msg
{

namespace builder
{

class Init_MissionWaypoint_hold_time
{
public:
  explicit Init_MissionWaypoint_hold_time(::px4_interface::msg::MissionWaypoint & msg)
  : msg_(msg)
  {}
  ::px4_interface::msg::MissionWaypoint hold_time(::px4_interface::msg::MissionWaypoint::_hold_time_type arg)
  {
    msg_.hold_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_interface::msg::MissionWaypoint msg_;
};

class Init_MissionWaypoint_alt
{
public:
  explicit Init_MissionWaypoint_alt(::px4_interface::msg::MissionWaypoint & msg)
  : msg_(msg)
  {}
  Init_MissionWaypoint_hold_time alt(::px4_interface::msg::MissionWaypoint::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return Init_MissionWaypoint_hold_time(msg_);
  }

private:
  ::px4_interface::msg::MissionWaypoint msg_;
};

class Init_MissionWaypoint_lon
{
public:
  explicit Init_MissionWaypoint_lon(::px4_interface::msg::MissionWaypoint & msg)
  : msg_(msg)
  {}
  Init_MissionWaypoint_alt lon(::px4_interface::msg::MissionWaypoint::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_MissionWaypoint_alt(msg_);
  }

private:
  ::px4_interface::msg::MissionWaypoint msg_;
};

class Init_MissionWaypoint_lat
{
public:
  explicit Init_MissionWaypoint_lat(::px4_interface::msg::MissionWaypoint & msg)
  : msg_(msg)
  {}
  Init_MissionWaypoint_lon lat(::px4_interface::msg::MissionWaypoint::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_MissionWaypoint_lon(msg_);
  }

private:
  ::px4_interface::msg::MissionWaypoint msg_;
};

class Init_MissionWaypoint_seq
{
public:
  Init_MissionWaypoint_seq()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionWaypoint_lat seq(::px4_interface::msg::MissionWaypoint::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_MissionWaypoint_lat(msg_);
  }

private:
  ::px4_interface::msg::MissionWaypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_interface::msg::MissionWaypoint>()
{
  return px4_interface::msg::builder::Init_MissionWaypoint_seq();
}

}  // namespace px4_interface

#endif  // PX4_INTERFACE__MSG__DETAIL__MISSION_WAYPOINT__BUILDER_HPP_
