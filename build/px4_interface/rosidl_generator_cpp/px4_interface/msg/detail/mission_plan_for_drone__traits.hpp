// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_interface:msg/MissionPlanForDrone.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__MISSION_PLAN_FOR_DRONE__TRAITS_HPP_
#define PX4_INTERFACE__MSG__DETAIL__MISSION_PLAN_FOR_DRONE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_interface/msg/detail/mission_plan_for_drone__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoints'
#include "px4_interface/msg/detail/mission_waypoint__traits.hpp"

namespace px4_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionPlanForDrone & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << ", ";
  }

  // member: drone_id
  {
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << ", ";
  }

  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cruise_altitude_m
  {
    out << "cruise_altitude_m: ";
    rosidl_generator_traits::value_to_yaml(msg.cruise_altitude_m, out);
    out << ", ";
  }

  // member: cruise_speed_mps
  {
    out << "cruise_speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.cruise_speed_mps, out);
    out << ", ";
  }

  // member: landing_mode
  {
    out << "landing_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.landing_mode, out);
    out << ", ";
  }

  // member: spacing_type
  {
    out << "spacing_type: ";
    rosidl_generator_traits::value_to_yaml(msg.spacing_type, out);
    out << ", ";
  }

  // member: spacing_value
  {
    out << "spacing_value: ";
    rosidl_generator_traits::value_to_yaml(msg.spacing_value, out);
    out << ", ";
  }

  // member: sequential_launch
  {
    out << "sequential_launch: ";
    rosidl_generator_traits::value_to_yaml(msg.sequential_launch, out);
    out << ", ";
  }

  // member: order_by_id
  {
    out << "order_by_id: ";
    rosidl_generator_traits::value_to_yaml(msg.order_by_id, out);
    out << ", ";
  }

  // member: heading_to_next_wp
  {
    out << "heading_to_next_wp: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_to_next_wp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionPlanForDrone & msg,
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

  // member: drone_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << "\n";
  }

  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cruise_altitude_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cruise_altitude_m: ";
    rosidl_generator_traits::value_to_yaml(msg.cruise_altitude_m, out);
    out << "\n";
  }

  // member: cruise_speed_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cruise_speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.cruise_speed_mps, out);
    out << "\n";
  }

  // member: landing_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "landing_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.landing_mode, out);
    out << "\n";
  }

  // member: spacing_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spacing_type: ";
    rosidl_generator_traits::value_to_yaml(msg.spacing_type, out);
    out << "\n";
  }

  // member: spacing_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spacing_value: ";
    rosidl_generator_traits::value_to_yaml(msg.spacing_value, out);
    out << "\n";
  }

  // member: sequential_launch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequential_launch: ";
    rosidl_generator_traits::value_to_yaml(msg.sequential_launch, out);
    out << "\n";
  }

  // member: order_by_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "order_by_id: ";
    rosidl_generator_traits::value_to_yaml(msg.order_by_id, out);
    out << "\n";
  }

  // member: heading_to_next_wp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_to_next_wp: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_to_next_wp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionPlanForDrone & msg, bool use_flow_style = false)
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
  const px4_interface::msg::MissionPlanForDrone & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_interface::msg::MissionPlanForDrone & msg)
{
  return px4_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_interface::msg::MissionPlanForDrone>()
{
  return "px4_interface::msg::MissionPlanForDrone";
}

template<>
inline const char * name<px4_interface::msg::MissionPlanForDrone>()
{
  return "px4_interface/msg/MissionPlanForDrone";
}

template<>
struct has_fixed_size<px4_interface::msg::MissionPlanForDrone>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<px4_interface::msg::MissionPlanForDrone>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<px4_interface::msg::MissionPlanForDrone>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_INTERFACE__MSG__DETAIL__MISSION_PLAN_FOR_DRONE__TRAITS_HPP_
