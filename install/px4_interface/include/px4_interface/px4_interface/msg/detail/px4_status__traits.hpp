// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_interface:msg/PX4Status.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__PX4_STATUS__TRAITS_HPP_
#define PX4_INTERFACE__MSG__DETAIL__PX4_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_interface/msg/detail/px4_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const PX4Status & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: drone_id
  {
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << ", ";
  }

  // member: heartbeat
  {
    out << "heartbeat: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat, out);
    out << ", ";
  }

  // member: battery_percentage
  {
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << ", ";
  }

  // member: flight_ready
  {
    out << "flight_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_ready, out);
    out << ", ";
  }

  // member: armed
  {
    out << "armed: ";
    rosidl_generator_traits::value_to_yaml(msg.armed, out);
    out << ", ";
  }

  // member: status_in_flight
  {
    out << "status_in_flight: ";
    rosidl_generator_traits::value_to_yaml(msg.status_in_flight, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: heading_deg
  {
    out << "heading_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_deg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PX4Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: drone_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << "\n";
  }

  // member: heartbeat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat, out);
    out << "\n";
  }

  // member: battery_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << "\n";
  }

  // member: flight_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flight_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_ready, out);
    out << "\n";
  }

  // member: armed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armed: ";
    rosidl_generator_traits::value_to_yaml(msg.armed, out);
    out << "\n";
  }

  // member: status_in_flight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_in_flight: ";
    rosidl_generator_traits::value_to_yaml(msg.status_in_flight, out);
    out << "\n";
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: heading_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_deg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PX4Status & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace px4_interface

namespace rosidl_generator_traits
{

[[deprecated("use px4_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_interface::msg::PX4Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_interface::msg::PX4Status & msg)
{
  return px4_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_interface::msg::PX4Status>()
{
  return "px4_interface::msg::PX4Status";
}

template<>
inline const char * name<px4_interface::msg::PX4Status>()
{
  return "px4_interface/msg/PX4Status";
}

template<>
struct has_fixed_size<px4_interface::msg::PX4Status>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<px4_interface::msg::PX4Status>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<px4_interface::msg::PX4Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_INTERFACE__MSG__DETAIL__PX4_STATUS__TRAITS_HPP_
