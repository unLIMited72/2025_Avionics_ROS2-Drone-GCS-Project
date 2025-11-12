// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_interface:msg/InstanceList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_interface/msg/detail/instance_list__rosidl_typesupport_introspection_c.h"
#include "px4_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_interface/msg/detail/instance_list__functions.h"
#include "px4_interface/msg/detail/instance_list__struct.h"


// Include directives for member types
// Member `drone_ids`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__InstanceList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_interface__msg__InstanceList__init(message_memory);
}

void px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__InstanceList_fini_function(void * message_memory)
{
  px4_interface__msg__InstanceList__fini(message_memory);
}

size_t px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__size_function__InstanceList__drone_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__get_const_function__InstanceList__drone_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__get_function__InstanceList__drone_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__fetch_function__InstanceList__drone_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__get_const_function__InstanceList__drone_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__assign_function__InstanceList__drone_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__get_function__InstanceList__drone_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__resize_function__InstanceList__drone_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__InstanceList_message_member_array[2] = {
  {
    "drone_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__InstanceList, drone_ids),  // bytes offset in struct
    NULL,  // default value
    px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__size_function__InstanceList__drone_ids,  // size() function pointer
    px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__get_const_function__InstanceList__drone_ids,  // get_const(index) function pointer
    px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__get_function__InstanceList__drone_ids,  // get(index) function pointer
    px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__fetch_function__InstanceList__drone_ids,  // fetch(index, &value) function pointer
    px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__assign_function__InstanceList__drone_ids,  // assign(index, value) function pointer
    px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__resize_function__InstanceList__drone_ids  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__InstanceList, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__InstanceList_message_members = {
  "px4_interface__msg",  // message namespace
  "InstanceList",  // message name
  2,  // number of fields
  sizeof(px4_interface__msg__InstanceList),
  px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__InstanceList_message_member_array,  // message members
  px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__InstanceList_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__InstanceList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__InstanceList_message_type_support_handle = {
  0,
  &px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__InstanceList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_interface, msg, InstanceList)() {
  if (!px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__InstanceList_message_type_support_handle.typesupport_identifier) {
    px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__InstanceList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_interface__msg__InstanceList__rosidl_typesupport_introspection_c__InstanceList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
