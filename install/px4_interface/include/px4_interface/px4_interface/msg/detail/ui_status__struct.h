// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_interface:msg/UIStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__UI_STATUS__STRUCT_H_
#define PX4_INTERFACE__MSG__DETAIL__UI_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FLIGHT_STATUS_NORMAL'.
/**
  * enum definitions (PX4Status와 동일)
 */
enum
{
  px4_interface__msg__UIStatus__FLIGHT_STATUS_NORMAL = 0
};

/// Constant 'FLIGHT_STATUS_WARNING'.
enum
{
  px4_interface__msg__UIStatus__FLIGHT_STATUS_WARNING = 1
};

/// Constant 'FLIGHT_STATUS_DANGER'.
enum
{
  px4_interface__msg__UIStatus__FLIGHT_STATUS_DANGER = 2
};

// Include directives for member types
// Member 'drone_ids'
#include "rosidl_runtime_c/string.h"
// Member 'heartbeats'
// Member 'battery_percentages'
// Member 'flight_readies'
// Member 'armeds'
// Member 'status_in_flights'
// Member 'latitudes'
// Member 'longitudes'
// Member 'heading_degs'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/UIStatus in the package px4_interface.
/**
  * px4_interface/msg/UIStatus.msg
 */
typedef struct px4_interface__msg__UIStatus
{
  uint64_t timestamp;
  rosidl_runtime_c__String__Sequence drone_ids;
  rosidl_runtime_c__boolean__Sequence heartbeats;
  rosidl_runtime_c__float__Sequence battery_percentages;
  rosidl_runtime_c__boolean__Sequence flight_readies;
  rosidl_runtime_c__boolean__Sequence armeds;
  rosidl_runtime_c__uint8__Sequence status_in_flights;
  rosidl_runtime_c__double__Sequence latitudes;
  rosidl_runtime_c__double__Sequence longitudes;
  rosidl_runtime_c__float__Sequence heading_degs;
} px4_interface__msg__UIStatus;

// Struct for a sequence of px4_interface__msg__UIStatus.
typedef struct px4_interface__msg__UIStatus__Sequence
{
  px4_interface__msg__UIStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_interface__msg__UIStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_INTERFACE__MSG__DETAIL__UI_STATUS__STRUCT_H_
