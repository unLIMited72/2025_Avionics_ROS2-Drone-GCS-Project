// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_interface:msg/UIStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__UI_STATUS__TRAITS_HPP_
#define PX4_INTERFACE__MSG__DETAIL__UI_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_interface/msg/detail/ui_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const UIStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
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
    out << ", ";
  }

  // member: heartbeats
  {
    if (msg.heartbeats.size() == 0) {
      out << "heartbeats: []";
    } else {
      out << "heartbeats: [";
      size_t pending_items = msg.heartbeats.size();
      for (auto item : msg.heartbeats) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: battery_percentages
  {
    if (msg.battery_percentages.size() == 0) {
      out << "battery_percentages: []";
    } else {
      out << "battery_percentages: [";
      size_t pending_items = msg.battery_percentages.size();
      for (auto item : msg.battery_percentages) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: flight_readies
  {
    if (msg.flight_readies.size() == 0) {
      out << "flight_readies: []";
    } else {
      out << "flight_readies: [";
      size_t pending_items = msg.flight_readies.size();
      for (auto item : msg.flight_readies) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: armeds
  {
    if (msg.armeds.size() == 0) {
      out << "armeds: []";
    } else {
      out << "armeds: [";
      size_t pending_items = msg.armeds.size();
      for (auto item : msg.armeds) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_in_flights
  {
    if (msg.status_in_flights.size() == 0) {
      out << "status_in_flights: []";
    } else {
      out << "status_in_flights: [";
      size_t pending_items = msg.status_in_flights.size();
      for (auto item : msg.status_in_flights) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: latitudes
  {
    if (msg.latitudes.size() == 0) {
      out << "latitudes: []";
    } else {
      out << "latitudes: [";
      size_t pending_items = msg.latitudes.size();
      for (auto item : msg.latitudes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: longitudes
  {
    if (msg.longitudes.size() == 0) {
      out << "longitudes: []";
    } else {
      out << "longitudes: [";
      size_t pending_items = msg.longitudes.size();
      for (auto item : msg.longitudes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: heading_degs
  {
    if (msg.heading_degs.size() == 0) {
      out << "heading_degs: []";
    } else {
      out << "heading_degs: [";
      size_t pending_items = msg.heading_degs.size();
      for (auto item : msg.heading_degs) {
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
  const UIStatus & msg,
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

  // member: heartbeats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.heartbeats.size() == 0) {
      out << "heartbeats: []\n";
    } else {
      out << "heartbeats:\n";
      for (auto item : msg.heartbeats) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: battery_percentages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.battery_percentages.size() == 0) {
      out << "battery_percentages: []\n";
    } else {
      out << "battery_percentages:\n";
      for (auto item : msg.battery_percentages) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: flight_readies
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.flight_readies.size() == 0) {
      out << "flight_readies: []\n";
    } else {
      out << "flight_readies:\n";
      for (auto item : msg.flight_readies) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: armeds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.armeds.size() == 0) {
      out << "armeds: []\n";
    } else {
      out << "armeds:\n";
      for (auto item : msg.armeds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_in_flights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_in_flights.size() == 0) {
      out << "status_in_flights: []\n";
    } else {
      out << "status_in_flights:\n";
      for (auto item : msg.status_in_flights) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: latitudes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.latitudes.size() == 0) {
      out << "latitudes: []\n";
    } else {
      out << "latitudes:\n";
      for (auto item : msg.latitudes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: longitudes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.longitudes.size() == 0) {
      out << "longitudes: []\n";
    } else {
      out << "longitudes:\n";
      for (auto item : msg.longitudes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: heading_degs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.heading_degs.size() == 0) {
      out << "heading_degs: []\n";
    } else {
      out << "heading_degs:\n";
      for (auto item : msg.heading_degs) {
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

inline std::string to_yaml(const UIStatus & msg, bool use_flow_style = false)
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
  const px4_interface::msg::UIStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_interface::msg::UIStatus & msg)
{
  return px4_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_interface::msg::UIStatus>()
{
  return "px4_interface::msg::UIStatus";
}

template<>
inline const char * name<px4_interface::msg::UIStatus>()
{
  return "px4_interface/msg/UIStatus";
}

template<>
struct has_fixed_size<px4_interface::msg::UIStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<px4_interface::msg::UIStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<px4_interface::msg::UIStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_INTERFACE__MSG__DETAIL__UI_STATUS__TRAITS_HPP_
