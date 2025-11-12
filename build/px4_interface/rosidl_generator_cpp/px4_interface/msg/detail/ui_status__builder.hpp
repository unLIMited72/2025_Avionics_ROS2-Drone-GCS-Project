// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_interface:msg/UIStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__UI_STATUS__BUILDER_HPP_
#define PX4_INTERFACE__MSG__DETAIL__UI_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_interface/msg/detail/ui_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_interface
{

namespace msg
{

namespace builder
{

class Init_UIStatus_heading_degs
{
public:
  explicit Init_UIStatus_heading_degs(::px4_interface::msg::UIStatus & msg)
  : msg_(msg)
  {}
  ::px4_interface::msg::UIStatus heading_degs(::px4_interface::msg::UIStatus::_heading_degs_type arg)
  {
    msg_.heading_degs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_interface::msg::UIStatus msg_;
};

class Init_UIStatus_longitudes
{
public:
  explicit Init_UIStatus_longitudes(::px4_interface::msg::UIStatus & msg)
  : msg_(msg)
  {}
  Init_UIStatus_heading_degs longitudes(::px4_interface::msg::UIStatus::_longitudes_type arg)
  {
    msg_.longitudes = std::move(arg);
    return Init_UIStatus_heading_degs(msg_);
  }

private:
  ::px4_interface::msg::UIStatus msg_;
};

class Init_UIStatus_latitudes
{
public:
  explicit Init_UIStatus_latitudes(::px4_interface::msg::UIStatus & msg)
  : msg_(msg)
  {}
  Init_UIStatus_longitudes latitudes(::px4_interface::msg::UIStatus::_latitudes_type arg)
  {
    msg_.latitudes = std::move(arg);
    return Init_UIStatus_longitudes(msg_);
  }

private:
  ::px4_interface::msg::UIStatus msg_;
};

class Init_UIStatus_status_in_flights
{
public:
  explicit Init_UIStatus_status_in_flights(::px4_interface::msg::UIStatus & msg)
  : msg_(msg)
  {}
  Init_UIStatus_latitudes status_in_flights(::px4_interface::msg::UIStatus::_status_in_flights_type arg)
  {
    msg_.status_in_flights = std::move(arg);
    return Init_UIStatus_latitudes(msg_);
  }

private:
  ::px4_interface::msg::UIStatus msg_;
};

class Init_UIStatus_armeds
{
public:
  explicit Init_UIStatus_armeds(::px4_interface::msg::UIStatus & msg)
  : msg_(msg)
  {}
  Init_UIStatus_status_in_flights armeds(::px4_interface::msg::UIStatus::_armeds_type arg)
  {
    msg_.armeds = std::move(arg);
    return Init_UIStatus_status_in_flights(msg_);
  }

private:
  ::px4_interface::msg::UIStatus msg_;
};

class Init_UIStatus_flight_readies
{
public:
  explicit Init_UIStatus_flight_readies(::px4_interface::msg::UIStatus & msg)
  : msg_(msg)
  {}
  Init_UIStatus_armeds flight_readies(::px4_interface::msg::UIStatus::_flight_readies_type arg)
  {
    msg_.flight_readies = std::move(arg);
    return Init_UIStatus_armeds(msg_);
  }

private:
  ::px4_interface::msg::UIStatus msg_;
};

class Init_UIStatus_battery_percentages
{
public:
  explicit Init_UIStatus_battery_percentages(::px4_interface::msg::UIStatus & msg)
  : msg_(msg)
  {}
  Init_UIStatus_flight_readies battery_percentages(::px4_interface::msg::UIStatus::_battery_percentages_type arg)
  {
    msg_.battery_percentages = std::move(arg);
    return Init_UIStatus_flight_readies(msg_);
  }

private:
  ::px4_interface::msg::UIStatus msg_;
};

class Init_UIStatus_heartbeats
{
public:
  explicit Init_UIStatus_heartbeats(::px4_interface::msg::UIStatus & msg)
  : msg_(msg)
  {}
  Init_UIStatus_battery_percentages heartbeats(::px4_interface::msg::UIStatus::_heartbeats_type arg)
  {
    msg_.heartbeats = std::move(arg);
    return Init_UIStatus_battery_percentages(msg_);
  }

private:
  ::px4_interface::msg::UIStatus msg_;
};

class Init_UIStatus_drone_ids
{
public:
  explicit Init_UIStatus_drone_ids(::px4_interface::msg::UIStatus & msg)
  : msg_(msg)
  {}
  Init_UIStatus_heartbeats drone_ids(::px4_interface::msg::UIStatus::_drone_ids_type arg)
  {
    msg_.drone_ids = std::move(arg);
    return Init_UIStatus_heartbeats(msg_);
  }

private:
  ::px4_interface::msg::UIStatus msg_;
};

class Init_UIStatus_timestamp
{
public:
  Init_UIStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UIStatus_drone_ids timestamp(::px4_interface::msg::UIStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_UIStatus_drone_ids(msg_);
  }

private:
  ::px4_interface::msg::UIStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_interface::msg::UIStatus>()
{
  return px4_interface::msg::builder::Init_UIStatus_timestamp();
}

}  // namespace px4_interface

#endif  // PX4_INTERFACE__MSG__DETAIL__UI_STATUS__BUILDER_HPP_
