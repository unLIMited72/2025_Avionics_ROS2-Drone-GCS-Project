// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_interface:msg/MissionPlanForDrone.idl
// generated code does not contain a copyright notice
#include "px4_interface/msg/detail/mission_plan_for_drone__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_interface/msg/detail/mission_plan_for_drone__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace px4_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const px4_interface::msg::MissionWaypoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  px4_interface::msg::MissionWaypoint &);
size_t get_serialized_size(
  const px4_interface::msg::MissionWaypoint &,
  size_t current_alignment);
size_t
max_serialized_size_MissionWaypoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace px4_interface


namespace px4_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_interface
cdr_serialize(
  const px4_interface::msg::MissionPlanForDrone & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mission_id
  cdr << ros_message.mission_id;
  // Member: drone_id
  cdr << ros_message.drone_id;
  // Member: waypoints
  {
    size_t size = ros_message.waypoints.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      px4_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.waypoints[i],
        cdr);
    }
  }
  // Member: cruise_altitude_m
  cdr << ros_message.cruise_altitude_m;
  // Member: cruise_speed_mps
  cdr << ros_message.cruise_speed_mps;
  // Member: landing_mode
  cdr << ros_message.landing_mode;
  // Member: spacing_type
  cdr << ros_message.spacing_type;
  // Member: spacing_value
  cdr << ros_message.spacing_value;
  // Member: sequential_launch
  cdr << (ros_message.sequential_launch ? true : false);
  // Member: order_by_id
  cdr << (ros_message.order_by_id ? true : false);
  // Member: heading_to_next_wp
  cdr << (ros_message.heading_to_next_wp ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_interface::msg::MissionPlanForDrone & ros_message)
{
  // Member: mission_id
  cdr >> ros_message.mission_id;

  // Member: drone_id
  cdr >> ros_message.drone_id;

  // Member: waypoints
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.waypoints.resize(size);
    for (size_t i = 0; i < size; i++) {
      px4_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.waypoints[i]);
    }
  }

  // Member: cruise_altitude_m
  cdr >> ros_message.cruise_altitude_m;

  // Member: cruise_speed_mps
  cdr >> ros_message.cruise_speed_mps;

  // Member: landing_mode
  cdr >> ros_message.landing_mode;

  // Member: spacing_type
  cdr >> ros_message.spacing_type;

  // Member: spacing_value
  cdr >> ros_message.spacing_value;

  // Member: sequential_launch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sequential_launch = tmp ? true : false;
  }

  // Member: order_by_id
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.order_by_id = tmp ? true : false;
  }

  // Member: heading_to_next_wp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heading_to_next_wp = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_interface
get_serialized_size(
  const px4_interface::msg::MissionPlanForDrone & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mission_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.mission_id.size() + 1);
  // Member: drone_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.drone_id.size() + 1);
  // Member: waypoints
  {
    size_t array_size = ros_message.waypoints.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        px4_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.waypoints[index], current_alignment);
    }
  }
  // Member: cruise_altitude_m
  {
    size_t item_size = sizeof(ros_message.cruise_altitude_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cruise_speed_mps
  {
    size_t item_size = sizeof(ros_message.cruise_speed_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: landing_mode
  {
    size_t item_size = sizeof(ros_message.landing_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: spacing_type
  {
    size_t item_size = sizeof(ros_message.spacing_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: spacing_value
  {
    size_t item_size = sizeof(ros_message.spacing_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sequential_launch
  {
    size_t item_size = sizeof(ros_message.sequential_launch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: order_by_id
  {
    size_t item_size = sizeof(ros_message.order_by_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_to_next_wp
  {
    size_t item_size = sizeof(ros_message.heading_to_next_wp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_interface
max_serialized_size_MissionPlanForDrone(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: mission_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: drone_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: waypoints
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        px4_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_MissionWaypoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: cruise_altitude_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cruise_speed_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: landing_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: spacing_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: spacing_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sequential_launch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: order_by_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heading_to_next_wp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4_interface::msg::MissionPlanForDrone;
    is_plain =
      (
      offsetof(DataType, heading_to_next_wp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MissionPlanForDrone__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_interface::msg::MissionPlanForDrone *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MissionPlanForDrone__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_interface::msg::MissionPlanForDrone *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MissionPlanForDrone__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_interface::msg::MissionPlanForDrone *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MissionPlanForDrone__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MissionPlanForDrone(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MissionPlanForDrone__callbacks = {
  "px4_interface::msg",
  "MissionPlanForDrone",
  _MissionPlanForDrone__cdr_serialize,
  _MissionPlanForDrone__cdr_deserialize,
  _MissionPlanForDrone__get_serialized_size,
  _MissionPlanForDrone__max_serialized_size
};

static rosidl_message_type_support_t _MissionPlanForDrone__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MissionPlanForDrone__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_interface::msg::MissionPlanForDrone>()
{
  return &px4_interface::msg::typesupport_fastrtps_cpp::_MissionPlanForDrone__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_interface, msg, MissionPlanForDrone)() {
  return &px4_interface::msg::typesupport_fastrtps_cpp::_MissionPlanForDrone__handle;
}

#ifdef __cplusplus
}
#endif
