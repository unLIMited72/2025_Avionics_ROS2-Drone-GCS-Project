// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_interface:msg/GyroControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__GYRO_CONTROL__TRAITS_HPP_
#define PX4_INTERFACE__MSG__DETAIL__GYRO_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_interface/msg/detail/gyro_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const GyroControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: drone_id
  {
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: target_altitude_m
  {
    out << "target_altitude_m: ";
    rosidl_generator_traits::value_to_yaml(msg.target_altitude_m, out);
    out << ", ";
  }

  // member: yaw_deg
  {
    out << "yaw_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_deg, out);
    out << ", ";
  }

  // member: vx_mps
  {
    out << "vx_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.vx_mps, out);
    out << ", ";
  }

  // member: vy_mps
  {
    out << "vy_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.vy_mps, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GyroControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: drone_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << "\n";
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: target_altitude_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_altitude_m: ";
    rosidl_generator_traits::value_to_yaml(msg.target_altitude_m, out);
    out << "\n";
  }

  // member: yaw_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_deg, out);
    out << "\n";
  }

  // member: vx_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.vx_mps, out);
    out << "\n";
  }

  // member: vy_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.vy_mps, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GyroControl & msg, bool use_flow_style = false)
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
  const px4_interface::msg::GyroControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_interface::msg::GyroControl & msg)
{
  return px4_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_interface::msg::GyroControl>()
{
  return "px4_interface::msg::GyroControl";
}

template<>
inline const char * name<px4_interface::msg::GyroControl>()
{
  return "px4_interface/msg/GyroControl";
}

template<>
struct has_fixed_size<px4_interface::msg::GyroControl>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<px4_interface::msg::GyroControl>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<px4_interface::msg::GyroControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_INTERFACE__MSG__DETAIL__GYRO_CONTROL__TRAITS_HPP_
