// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_interface:msg/MissionPlanForDrone.idl
// generated code does not contain a copyright notice
#include "px4_interface/msg/detail/mission_plan_for_drone__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_interface/msg/detail/mission_plan_for_drone__struct.h"
#include "px4_interface/msg/detail/mission_plan_for_drone__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "px4_interface/msg/detail/mission_waypoint__functions.h"  // waypoints
#include "rosidl_runtime_c/string.h"  // drone_id, mission_id
#include "rosidl_runtime_c/string_functions.h"  // drone_id, mission_id

// forward declare type support functions
size_t get_serialized_size_px4_interface__msg__MissionWaypoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_px4_interface__msg__MissionWaypoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_interface, msg, MissionWaypoint)();


using _MissionPlanForDrone__ros_msg_type = px4_interface__msg__MissionPlanForDrone;

static bool _MissionPlanForDrone__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MissionPlanForDrone__ros_msg_type * ros_message = static_cast<const _MissionPlanForDrone__ros_msg_type *>(untyped_ros_message);
  // Field name: mission_id
  {
    const rosidl_runtime_c__String * str = &ros_message->mission_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: drone_id
  {
    const rosidl_runtime_c__String * str = &ros_message->drone_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: waypoints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, px4_interface, msg, MissionWaypoint
      )()->data);
    size_t size = ros_message->waypoints.size;
    auto array_ptr = ros_message->waypoints.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: cruise_altitude_m
  {
    cdr << ros_message->cruise_altitude_m;
  }

  // Field name: cruise_speed_mps
  {
    cdr << ros_message->cruise_speed_mps;
  }

  // Field name: landing_mode
  {
    cdr << ros_message->landing_mode;
  }

  // Field name: spacing_type
  {
    cdr << ros_message->spacing_type;
  }

  // Field name: spacing_value
  {
    cdr << ros_message->spacing_value;
  }

  // Field name: sequential_launch
  {
    cdr << (ros_message->sequential_launch ? true : false);
  }

  // Field name: order_by_id
  {
    cdr << (ros_message->order_by_id ? true : false);
  }

  // Field name: heading_to_next_wp
  {
    cdr << (ros_message->heading_to_next_wp ? true : false);
  }

  return true;
}

static bool _MissionPlanForDrone__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MissionPlanForDrone__ros_msg_type * ros_message = static_cast<_MissionPlanForDrone__ros_msg_type *>(untyped_ros_message);
  // Field name: mission_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mission_id.data) {
      rosidl_runtime_c__String__init(&ros_message->mission_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mission_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mission_id'\n");
      return false;
    }
  }

  // Field name: drone_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->drone_id.data) {
      rosidl_runtime_c__String__init(&ros_message->drone_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->drone_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'drone_id'\n");
      return false;
    }
  }

  // Field name: waypoints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, px4_interface, msg, MissionWaypoint
      )()->data);
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

    if (ros_message->waypoints.data) {
      px4_interface__msg__MissionWaypoint__Sequence__fini(&ros_message->waypoints);
    }
    if (!px4_interface__msg__MissionWaypoint__Sequence__init(&ros_message->waypoints, size)) {
      fprintf(stderr, "failed to create array for field 'waypoints'");
      return false;
    }
    auto array_ptr = ros_message->waypoints.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: cruise_altitude_m
  {
    cdr >> ros_message->cruise_altitude_m;
  }

  // Field name: cruise_speed_mps
  {
    cdr >> ros_message->cruise_speed_mps;
  }

  // Field name: landing_mode
  {
    cdr >> ros_message->landing_mode;
  }

  // Field name: spacing_type
  {
    cdr >> ros_message->spacing_type;
  }

  // Field name: spacing_value
  {
    cdr >> ros_message->spacing_value;
  }

  // Field name: sequential_launch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sequential_launch = tmp ? true : false;
  }

  // Field name: order_by_id
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->order_by_id = tmp ? true : false;
  }

  // Field name: heading_to_next_wp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heading_to_next_wp = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_interface
size_t get_serialized_size_px4_interface__msg__MissionPlanForDrone(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MissionPlanForDrone__ros_msg_type * ros_message = static_cast<const _MissionPlanForDrone__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mission_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mission_id.size + 1);
  // field.name drone_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->drone_id.size + 1);
  // field.name waypoints
  {
    size_t array_size = ros_message->waypoints.size;
    auto array_ptr = ros_message->waypoints.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_px4_interface__msg__MissionWaypoint(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name cruise_altitude_m
  {
    size_t item_size = sizeof(ros_message->cruise_altitude_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cruise_speed_mps
  {
    size_t item_size = sizeof(ros_message->cruise_speed_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name landing_mode
  {
    size_t item_size = sizeof(ros_message->landing_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spacing_type
  {
    size_t item_size = sizeof(ros_message->spacing_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spacing_value
  {
    size_t item_size = sizeof(ros_message->spacing_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sequential_launch
  {
    size_t item_size = sizeof(ros_message->sequential_launch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name order_by_id
  {
    size_t item_size = sizeof(ros_message->order_by_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_to_next_wp
  {
    size_t item_size = sizeof(ros_message->heading_to_next_wp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MissionPlanForDrone__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_interface__msg__MissionPlanForDrone(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_interface
size_t max_serialized_size_px4_interface__msg__MissionPlanForDrone(
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

  // member: mission_id
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
  // member: drone_id
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
  // member: waypoints
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
      size_t inner_size;
      inner_size =
        max_serialized_size_px4_interface__msg__MissionWaypoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cruise_altitude_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cruise_speed_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: landing_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: spacing_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: spacing_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sequential_launch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: order_by_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heading_to_next_wp
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
    using DataType = px4_interface__msg__MissionPlanForDrone;
    is_plain =
      (
      offsetof(DataType, heading_to_next_wp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MissionPlanForDrone__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_interface__msg__MissionPlanForDrone(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MissionPlanForDrone = {
  "px4_interface::msg",
  "MissionPlanForDrone",
  _MissionPlanForDrone__cdr_serialize,
  _MissionPlanForDrone__cdr_deserialize,
  _MissionPlanForDrone__get_serialized_size,
  _MissionPlanForDrone__max_serialized_size
};

static rosidl_message_type_support_t _MissionPlanForDrone__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MissionPlanForDrone,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_interface, msg, MissionPlanForDrone)() {
  return &_MissionPlanForDrone__type_support;
}

#if defined(__cplusplus)
}
#endif
