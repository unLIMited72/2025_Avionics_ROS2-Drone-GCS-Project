// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_interface:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
#define PX4_INTERFACE__MSG__DETAIL__MISSION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATE_IDLE'.
enum
{
  px4_interface__msg__MissionStatus__STATE_IDLE = 0
};

/// Constant 'STATE_ACTIVE'.
enum
{
  px4_interface__msg__MissionStatus__STATE_ACTIVE = 1
};

/// Constant 'STATE_PAUSED'.
enum
{
  px4_interface__msg__MissionStatus__STATE_PAUSED = 2
};

/// Constant 'STATE_EMERGENCY'.
enum
{
  px4_interface__msg__MissionStatus__STATE_EMERGENCY = 3
};

/// Constant 'STATE_COMPLETED'.
enum
{
  px4_interface__msg__MissionStatus__STATE_COMPLETED = 4
};

/// Constant 'STATE_ABORTED'.
enum
{
  px4_interface__msg__MissionStatus__STATE_ABORTED = 5
};

// Include directives for member types
// Member 'mission_id'
// Member 'drone_ids'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MissionStatus in the package px4_interface.
/**
  * px4_interface/msg/MissionStatus.msg
 */
typedef struct px4_interface__msg__MissionStatus
{
  rosidl_runtime_c__String mission_id;
  uint8_t state;
  rosidl_runtime_c__String__Sequence drone_ids;
} px4_interface__msg__MissionStatus;

// Struct for a sequence of px4_interface__msg__MissionStatus.
typedef struct px4_interface__msg__MissionStatus__Sequence
{
  px4_interface__msg__MissionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_interface__msg__MissionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_INTERFACE__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
