// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_interface:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_
#define PX4_INTERFACE__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_interface/msg/detail/mission_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: drone_ids
  {
    if (msg.drone_ids.size() == 0) {
      out << "drone_ids: []";
    } else {
      out << "drone_ids: [";
      size_t pending_items = msg.drone_ids.size();
      for (auto item : msg.drone_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mission_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: drone_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.drone_ids.size() == 0) {
      out << "drone_ids: []\n";
    } else {
      out << "drone_ids:\n";
      for (auto item : msg.drone_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionStatus & msg, bool use_flow_style = false)
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
  const px4_interface::msg::MissionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_interface::msg::MissionStatus & msg)
{
  return px4_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_interface::msg::MissionStatus>()
{
  return "px4_interface::msg::MissionStatus";
}

template<>
inline const char * name<px4_interface::msg::MissionStatus>()
{
  return "px4_interface/msg/MissionStatus";
}

template<>
struct has_fixed_size<px4_interface::msg::MissionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<px4_interface::msg::MissionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<px4_interface::msg::MissionStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_INTERFACE__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_
