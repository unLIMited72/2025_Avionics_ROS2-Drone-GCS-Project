// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_interface:msg/InstanceList.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__INSTANCE_LIST__STRUCT_H_
#define PX4_INTERFACE__MSG__DETAIL__INSTANCE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'drone_ids'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/InstanceList in the package px4_interface.
/**
  * px4_interface/msg/InstanceList.msg
 */
typedef struct px4_interface__msg__InstanceList
{
  rosidl_runtime_c__String__Sequence drone_ids;
  uint64_t timestamp;
} px4_interface__msg__InstanceList;

// Struct for a sequence of px4_interface__msg__InstanceList.
typedef struct px4_interface__msg__InstanceList__Sequence
{
  px4_interface__msg__InstanceList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_interface__msg__InstanceList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_INTERFACE__MSG__DETAIL__INSTANCE_LIST__STRUCT_H_
