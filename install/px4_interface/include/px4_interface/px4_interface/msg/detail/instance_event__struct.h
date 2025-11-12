// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_interface:msg/InstanceEvent.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__INSTANCE_EVENT__STRUCT_H_
#define PX4_INTERFACE__MSG__DETAIL__INSTANCE_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'drone_id'
// Member 'event'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/InstanceEvent in the package px4_interface.
/**
  * px4_interface/msg/InstanceEvent.msg
 */
typedef struct px4_interface__msg__InstanceEvent
{
  /// ex: "px4_0", "px4_1"
  rosidl_runtime_c__String drone_id;
  /// "join" or "leave"
  rosidl_runtime_c__String event;
  /// us
  uint64_t timestamp;
} px4_interface__msg__InstanceEvent;

// Struct for a sequence of px4_interface__msg__InstanceEvent.
typedef struct px4_interface__msg__InstanceEvent__Sequence
{
  px4_interface__msg__InstanceEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_interface__msg__InstanceEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_INTERFACE__MSG__DETAIL__INSTANCE_EVENT__STRUCT_H_
