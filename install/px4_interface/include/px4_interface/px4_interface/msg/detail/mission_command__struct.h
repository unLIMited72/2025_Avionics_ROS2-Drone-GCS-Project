// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_interface:msg/MissionCommand.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__MISSION_COMMAND__STRUCT_H_
#define PX4_INTERFACE__MSG__DETAIL__MISSION_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CMD_START'.
enum
{
  px4_interface__msg__MissionCommand__CMD_START = 0
};

/// Constant 'CMD_PAUSE'.
enum
{
  px4_interface__msg__MissionCommand__CMD_PAUSE = 1
};

/// Constant 'CMD_RESUME'.
enum
{
  px4_interface__msg__MissionCommand__CMD_RESUME = 2
};

/// Constant 'CMD_EMERGENCY_RETURN'.
enum
{
  px4_interface__msg__MissionCommand__CMD_EMERGENCY_RETURN = 3
};

/// Constant 'CMD_ABORT'.
enum
{
  px4_interface__msg__MissionCommand__CMD_ABORT = 4
};

// Include directives for member types
// Member 'mission_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MissionCommand in the package px4_interface.
/**
  * px4_interface/msg/MissionCommand.msg
 */
typedef struct px4_interface__msg__MissionCommand
{
  rosidl_runtime_c__String mission_id;
  uint8_t command;
} px4_interface__msg__MissionCommand;

// Struct for a sequence of px4_interface__msg__MissionCommand.
typedef struct px4_interface__msg__MissionCommand__Sequence
{
  px4_interface__msg__MissionCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_interface__msg__MissionCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_INTERFACE__MSG__DETAIL__MISSION_COMMAND__STRUCT_H_
