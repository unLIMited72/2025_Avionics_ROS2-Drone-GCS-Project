// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_interface:msg/MissionWaypoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__MISSION_WAYPOINT__TRAITS_HPP_
#define PX4_INTERFACE__MSG__DETAIL__MISSION_WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_interface/msg/detail/mission_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionWaypoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: seq
  {
    out << "seq: ";
    rosidl_generator_traits::value_to_yaml(msg.seq, out);
    out << ", ";
  }

  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << ", ";
  }

  // member: alt
  {
    out << "alt: ";
    rosidl_generator_traits::value_to_yaml(msg.alt, out);
    out << ", ";
  }

  // member: hold_time
  {
    out << "hold_time: ";
    rosidl_generator_traits::value_to_yaml(msg.hold_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionWaypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: seq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq: ";
    rosidl_generator_traits::value_to_yaml(msg.seq, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt: ";
    rosidl_generator_traits::value_to_yaml(msg.alt, out);
    out << "\n";
  }

  // member: hold_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hold_time: ";
    rosidl_generator_traits::value_to_yaml(msg.hold_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionWaypoint & msg, bool use_flow_style = false)
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
  const px4_interface::msg::MissionWaypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_interface::msg::MissionWaypoint & msg)
{
  return px4_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_interface::msg::MissionWaypoint>()
{
  return "px4_interface::msg::MissionWaypoint";
}

template<>
inline const char * name<px4_interface::msg::MissionWaypoint>()
{
  return "px4_interface/msg/MissionWaypoint";
}

template<>
struct has_fixed_size<px4_interface::msg::MissionWaypoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_interface::msg::MissionWaypoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_interface::msg::MissionWaypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_INTERFACE__MSG__DETAIL__MISSION_WAYPOINT__TRAITS_HPP_
