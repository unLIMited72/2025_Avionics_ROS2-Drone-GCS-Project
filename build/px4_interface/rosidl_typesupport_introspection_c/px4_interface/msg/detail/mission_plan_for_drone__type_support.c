// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_interface:msg/MissionPlanForDrone.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_interface/msg/detail/mission_plan_for_drone__rosidl_typesupport_introspection_c.h"
#include "px4_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_interface/msg/detail/mission_plan_for_drone__functions.h"
#include "px4_interface/msg/detail/mission_plan_for_drone__struct.h"


// Include directives for member types
// Member `mission_id`
// Member `drone_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `waypoints`
#include "px4_interface/msg/mission_waypoint.h"
// Member `waypoints`
#include "px4_interface/msg/detail/mission_waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__MissionPlanForDrone_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_interface__msg__MissionPlanForDrone__init(message_memory);
}

void px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__MissionPlanForDrone_fini_function(void * message_memory)
{
  px4_interface__msg__MissionPlanForDrone__fini(message_memory);
}

size_t px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__size_function__MissionPlanForDrone__waypoints(
  const void * untyped_member)
{
  const px4_interface__msg__MissionWaypoint__Sequence * member =
    (const px4_interface__msg__MissionWaypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__get_const_function__MissionPlanForDrone__waypoints(
  const void * untyped_member, size_t index)
{
  const px4_interface__msg__MissionWaypoint__Sequence * member =
    (const px4_interface__msg__MissionWaypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__get_function__MissionPlanForDrone__waypoints(
  void * untyped_member, size_t index)
{
  px4_interface__msg__MissionWaypoint__Sequence * member =
    (px4_interface__msg__MissionWaypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__fetch_function__MissionPlanForDrone__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const px4_interface__msg__MissionWaypoint * item =
    ((const px4_interface__msg__MissionWaypoint *)
    px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__get_const_function__MissionPlanForDrone__waypoints(untyped_member, index));
  px4_interface__msg__MissionWaypoint * value =
    (px4_interface__msg__MissionWaypoint *)(untyped_value);
  *value = *item;
}

void px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__assign_function__MissionPlanForDrone__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  px4_interface__msg__MissionWaypoint * item =
    ((px4_interface__msg__MissionWaypoint *)
    px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__get_function__MissionPlanForDrone__waypoints(untyped_member, index));
  const px4_interface__msg__MissionWaypoint * value =
    (const px4_interface__msg__MissionWaypoint *)(untyped_value);
  *item = *value;
}

bool px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__resize_function__MissionPlanForDrone__waypoints(
  void * untyped_member, size_t size)
{
  px4_interface__msg__MissionWaypoint__Sequence * member =
    (px4_interface__msg__MissionWaypoint__Sequence *)(untyped_member);
  px4_interface__msg__MissionWaypoint__Sequence__fini(member);
  return px4_interface__msg__MissionWaypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__MissionPlanForDrone_message_member_array[11] = {
  {
    "mission_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__MissionPlanForDrone, mission_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drone_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__MissionPlanForDrone, drone_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__MissionPlanForDrone, waypoints),  // bytes offset in struct
    NULL,  // default value
    px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__size_function__MissionPlanForDrone__waypoints,  // size() function pointer
    px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__get_const_function__MissionPlanForDrone__waypoints,  // get_const(index) function pointer
    px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__get_function__MissionPlanForDrone__waypoints,  // get(index) function pointer
    px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__fetch_function__MissionPlanForDrone__waypoints,  // fetch(index, &value) function pointer
    px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__assign_function__MissionPlanForDrone__waypoints,  // assign(index, value) function pointer
    px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__resize_function__MissionPlanForDrone__waypoints  // resize(index) function pointer
  },
  {
    "cruise_altitude_m",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__MissionPlanForDrone, cruise_altitude_m),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cruise_speed_mps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__MissionPlanForDrone, cruise_speed_mps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "landing_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__MissionPlanForDrone, landing_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spacing_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__MissionPlanForDrone, spacing_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spacing_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__MissionPlanForDrone, spacing_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequential_launch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__MissionPlanForDrone, sequential_launch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "order_by_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__MissionPlanForDrone, order_by_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading_to_next_wp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__MissionPlanForDrone, heading_to_next_wp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__MissionPlanForDrone_message_members = {
  "px4_interface__msg",  // message namespace
  "MissionPlanForDrone",  // message name
  11,  // number of fields
  sizeof(px4_interface__msg__MissionPlanForDrone),
  px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__MissionPlanForDrone_message_member_array,  // message members
  px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__MissionPlanForDrone_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__MissionPlanForDrone_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__MissionPlanForDrone_message_type_support_handle = {
  0,
  &px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__MissionPlanForDrone_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_interface, msg, MissionPlanForDrone)() {
  px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__MissionPlanForDrone_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_interface, msg, MissionWaypoint)();
  if (!px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__MissionPlanForDrone_message_type_support_handle.typesupport_identifier) {
    px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__MissionPlanForDrone_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_interface__msg__MissionPlanForDrone__rosidl_typesupport_introspection_c__MissionPlanForDrone_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
