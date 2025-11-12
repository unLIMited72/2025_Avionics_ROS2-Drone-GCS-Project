// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_interface:msg/GyroControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_interface/msg/detail/gyro_control__rosidl_typesupport_introspection_c.h"
#include "px4_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_interface/msg/detail/gyro_control__functions.h"
#include "px4_interface/msg/detail/gyro_control__struct.h"


// Include directives for member types
// Member `drone_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void px4_interface__msg__GyroControl__rosidl_typesupport_introspection_c__GyroControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_interface__msg__GyroControl__init(message_memory);
}

void px4_interface__msg__GyroControl__rosidl_typesupport_introspection_c__GyroControl_fini_function(void * message_memory)
{
  px4_interface__msg__GyroControl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember px4_interface__msg__GyroControl__rosidl_typesupport_introspection_c__GyroControl_message_member_array[6] = {
  {
    "drone_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__GyroControl, drone_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__GyroControl, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_altitude_m",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__GyroControl, target_altitude_m),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__GyroControl, yaw_deg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vx_mps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__GyroControl, vx_mps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vy_mps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__GyroControl, vy_mps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_interface__msg__GyroControl__rosidl_typesupport_introspection_c__GyroControl_message_members = {
  "px4_interface__msg",  // message namespace
  "GyroControl",  // message name
  6,  // number of fields
  sizeof(px4_interface__msg__GyroControl),
  px4_interface__msg__GyroControl__rosidl_typesupport_introspection_c__GyroControl_message_member_array,  // message members
  px4_interface__msg__GyroControl__rosidl_typesupport_introspection_c__GyroControl_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_interface__msg__GyroControl__rosidl_typesupport_introspection_c__GyroControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_interface__msg__GyroControl__rosidl_typesupport_introspection_c__GyroControl_message_type_support_handle = {
  0,
  &px4_interface__msg__GyroControl__rosidl_typesupport_introspection_c__GyroControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_interface, msg, GyroControl)() {
  if (!px4_interface__msg__GyroControl__rosidl_typesupport_introspection_c__GyroControl_message_type_support_handle.typesupport_identifier) {
    px4_interface__msg__GyroControl__rosidl_typesupport_introspection_c__GyroControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_interface__msg__GyroControl__rosidl_typesupport_introspection_c__GyroControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
