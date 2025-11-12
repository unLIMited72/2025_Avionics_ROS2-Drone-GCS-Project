// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_interface:msg/PX4Status.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__PX4_STATUS__BUILDER_HPP_
#define PX4_INTERFACE__MSG__DETAIL__PX4_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_interface/msg/detail/px4_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_interface
{

namespace msg
{

namespace builder
{

class Init_PX4Status_heading_deg
{
public:
  explicit Init_PX4Status_heading_deg(::px4_interface::msg::PX4Status & msg)
  : msg_(msg)
  {}
  ::px4_interface::msg::PX4Status heading_deg(::px4_interface::msg::PX4Status::_heading_deg_type arg)
  {
    msg_.heading_deg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_interface::msg::PX4Status msg_;
};

class Init_PX4Status_longitude
{
public:
  explicit Init_PX4Status_longitude(::px4_interface::msg::PX4Status & msg)
  : msg_(msg)
  {}
  Init_PX4Status_heading_deg longitude(::px4_interface::msg::PX4Status::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_PX4Status_heading_deg(msg_);
  }

private:
  ::px4_interface::msg::PX4Status msg_;
};

class Init_PX4Status_latitude
{
public:
  explicit Init_PX4Status_latitude(::px4_interface::msg::PX4Status & msg)
  : msg_(msg)
  {}
  Init_PX4Status_longitude latitude(::px4_interface::msg::PX4Status::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_PX4Status_longitude(msg_);
  }

private:
  ::px4_interface::msg::PX4Status msg_;
};

class Init_PX4Status_status_in_flight
{
public:
  explicit Init_PX4Status_status_in_flight(::px4_interface::msg::PX4Status & msg)
  : msg_(msg)
  {}
  Init_PX4Status_latitude status_in_flight(::px4_interface::msg::PX4Status::_status_in_flight_type arg)
  {
    msg_.status_in_flight = std::move(arg);
    return Init_PX4Status_latitude(msg_);
  }

private:
  ::px4_interface::msg::PX4Status msg_;
};

class Init_PX4Status_armed
{
public:
  explicit Init_PX4Status_armed(::px4_interface::msg::PX4Status & msg)
  : msg_(msg)
  {}
  Init_PX4Status_status_in_flight armed(::px4_interface::msg::PX4Status::_armed_type arg)
  {
    msg_.armed = std::move(arg);
    return Init_PX4Status_status_in_flight(msg_);
  }

private:
  ::px4_interface::msg::PX4Status msg_;
};

class Init_PX4Status_flight_ready
{
public:
  explicit Init_PX4Status_flight_ready(::px4_interface::msg::PX4Status & msg)
  : msg_(msg)
  {}
  Init_PX4Status_armed flight_ready(::px4_interface::msg::PX4Status::_flight_ready_type arg)
  {
    msg_.flight_ready = std::move(arg);
    return Init_PX4Status_armed(msg_);
  }

private:
  ::px4_interface::msg::PX4Status msg_;
};

class Init_PX4Status_battery_percentage
{
public:
  explicit Init_PX4Status_battery_percentage(::px4_interface::msg::PX4Status & msg)
  : msg_(msg)
  {}
  Init_PX4Status_flight_ready battery_percentage(::px4_interface::msg::PX4Status::_battery_percentage_type arg)
  {
    msg_.battery_percentage = std::move(arg);
    return Init_PX4Status_flight_ready(msg_);
  }

private:
  ::px4_interface::msg::PX4Status msg_;
};

class Init_PX4Status_heartbeat
{
public:
  explicit Init_PX4Status_heartbeat(::px4_interface::msg::PX4Status & msg)
  : msg_(msg)
  {}
  Init_PX4Status_battery_percentage heartbeat(::px4_interface::msg::PX4Status::_heartbeat_type arg)
  {
    msg_.heartbeat = std::move(arg);
    return Init_PX4Status_battery_percentage(msg_);
  }

private:
  ::px4_interface::msg::PX4Status msg_;
};

class Init_PX4Status_drone_id
{
public:
  explicit Init_PX4Status_drone_id(::px4_interface::msg::PX4Status & msg)
  : msg_(msg)
  {}
  Init_PX4Status_heartbeat drone_id(::px4_interface::msg::PX4Status::_drone_id_type arg)
  {
    msg_.drone_id = std::move(arg);
    return Init_PX4Status_heartbeat(msg_);
  }

private:
  ::px4_interface::msg::PX4Status msg_;
};

class Init_PX4Status_timestamp
{
public:
  Init_PX4Status_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PX4Status_drone_id timestamp(::px4_interface::msg::PX4Status::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PX4Status_drone_id(msg_);
  }

private:
  ::px4_interface::msg::PX4Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_interface::msg::PX4Status>()
{
  return px4_interface::msg::builder::Init_PX4Status_timestamp();
}

}  // namespace px4_interface

#endif  // PX4_INTERFACE__MSG__DETAIL__PX4_STATUS__BUILDER_HPP_
