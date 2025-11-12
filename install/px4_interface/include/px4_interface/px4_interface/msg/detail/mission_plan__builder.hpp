// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_interface:msg/MissionPlan.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__MISSION_PLAN__BUILDER_HPP_
#define PX4_INTERFACE__MSG__DETAIL__MISSION_PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_interface/msg/detail/mission_plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_interface
{

namespace msg
{

namespace builder
{

class Init_MissionPlan_heading_to_next_wp
{
public:
  explicit Init_MissionPlan_heading_to_next_wp(::px4_interface::msg::MissionPlan & msg)
  : msg_(msg)
  {}
  ::px4_interface::msg::MissionPlan heading_to_next_wp(::px4_interface::msg::MissionPlan::_heading_to_next_wp_type arg)
  {
    msg_.heading_to_next_wp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_interface::msg::MissionPlan msg_;
};

class Init_MissionPlan_order_by_id
{
public:
  explicit Init_MissionPlan_order_by_id(::px4_interface::msg::MissionPlan & msg)
  : msg_(msg)
  {}
  Init_MissionPlan_heading_to_next_wp order_by_id(::px4_interface::msg::MissionPlan::_order_by_id_type arg)
  {
    msg_.order_by_id = std::move(arg);
    return Init_MissionPlan_heading_to_next_wp(msg_);
  }

private:
  ::px4_interface::msg::MissionPlan msg_;
};

class Init_MissionPlan_sequential_launch
{
public:
  explicit Init_MissionPlan_sequential_launch(::px4_interface::msg::MissionPlan & msg)
  : msg_(msg)
  {}
  Init_MissionPlan_order_by_id sequential_launch(::px4_interface::msg::MissionPlan::_sequential_launch_type arg)
  {
    msg_.sequential_launch = std::move(arg);
    return Init_MissionPlan_order_by_id(msg_);
  }

private:
  ::px4_interface::msg::MissionPlan msg_;
};

class Init_MissionPlan_spacing_value
{
public:
  explicit Init_MissionPlan_spacing_value(::px4_interface::msg::MissionPlan & msg)
  : msg_(msg)
  {}
  Init_MissionPlan_sequential_launch spacing_value(::px4_interface::msg::MissionPlan::_spacing_value_type arg)
  {
    msg_.spacing_value = std::move(arg);
    return Init_MissionPlan_sequential_launch(msg_);
  }

private:
  ::px4_interface::msg::MissionPlan msg_;
};

class Init_MissionPlan_spacing_type
{
public:
  explicit Init_MissionPlan_spacing_type(::px4_interface::msg::MissionPlan & msg)
  : msg_(msg)
  {}
  Init_MissionPlan_spacing_value spacing_type(::px4_interface::msg::MissionPlan::_spacing_type_type arg)
  {
    msg_.spacing_type = std::move(arg);
    return Init_MissionPlan_spacing_value(msg_);
  }

private:
  ::px4_interface::msg::MissionPlan msg_;
};

class Init_MissionPlan_landing_mode
{
public:
  explicit Init_MissionPlan_landing_mode(::px4_interface::msg::MissionPlan & msg)
  : msg_(msg)
  {}
  Init_MissionPlan_spacing_type landing_mode(::px4_interface::msg::MissionPlan::_landing_mode_type arg)
  {
    msg_.landing_mode = std::move(arg);
    return Init_MissionPlan_spacing_type(msg_);
  }

private:
  ::px4_interface::msg::MissionPlan msg_;
};

class Init_MissionPlan_cruise_speed_mps
{
public:
  explicit Init_MissionPlan_cruise_speed_mps(::px4_interface::msg::MissionPlan & msg)
  : msg_(msg)
  {}
  Init_MissionPlan_landing_mode cruise_speed_mps(::px4_interface::msg::MissionPlan::_cruise_speed_mps_type arg)
  {
    msg_.cruise_speed_mps = std::move(arg);
    return Init_MissionPlan_landing_mode(msg_);
  }

private:
  ::px4_interface::msg::MissionPlan msg_;
};

class Init_MissionPlan_cruise_altitude_m
{
public:
  explicit Init_MissionPlan_cruise_altitude_m(::px4_interface::msg::MissionPlan & msg)
  : msg_(msg)
  {}
  Init_MissionPlan_cruise_speed_mps cruise_altitude_m(::px4_interface::msg::MissionPlan::_cruise_altitude_m_type arg)
  {
    msg_.cruise_altitude_m = std::move(arg);
    return Init_MissionPlan_cruise_speed_mps(msg_);
  }

private:
  ::px4_interface::msg::MissionPlan msg_;
};

class Init_MissionPlan_waypoints
{
public:
  explicit Init_MissionPlan_waypoints(::px4_interface::msg::MissionPlan & msg)
  : msg_(msg)
  {}
  Init_MissionPlan_cruise_altitude_m waypoints(::px4_interface::msg::MissionPlan::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_MissionPlan_cruise_altitude_m(msg_);
  }

private:
  ::px4_interface::msg::MissionPlan msg_;
};

class Init_MissionPlan_drone_ids
{
public:
  explicit Init_MissionPlan_drone_ids(::px4_interface::msg::MissionPlan & msg)
  : msg_(msg)
  {}
  Init_MissionPlan_waypoints drone_ids(::px4_interface::msg::MissionPlan::_drone_ids_type arg)
  {
    msg_.drone_ids = std::move(arg);
    return Init_MissionPlan_waypoints(msg_);
  }

private:
  ::px4_interface::msg::MissionPlan msg_;
};

class Init_MissionPlan_mission_id
{
public:
  Init_MissionPlan_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionPlan_drone_ids mission_id(::px4_interface::msg::MissionPlan::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_MissionPlan_drone_ids(msg_);
  }

private:
  ::px4_interface::msg::MissionPlan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_interface::msg::MissionPlan>()
{
  return px4_interface::msg::builder::Init_MissionPlan_mission_id();
}

}  // namespace px4_interface

#endif  // PX4_INTERFACE__MSG__DETAIL__MISSION_PLAN__BUILDER_HPP_
