// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_interface:msg/GyroControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__GYRO_CONTROL__STRUCT_H_
#define PX4_INTERFACE__MSG__DETAIL__GYRO_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COMMAND_CONTROL'.
enum
{
  px4_interface__msg__GyroControl__COMMAND_CONTROL = 0
};

/// Constant 'COMMAND_TAKEOFF'.
enum
{
  px4_interface__msg__GyroControl__COMMAND_TAKEOFF = 1
};

/// Constant 'COMMAND_LAND'.
enum
{
  px4_interface__msg__GyroControl__COMMAND_LAND = 2
};

// Include directives for member types
// Member 'drone_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GyroControl in the package px4_interface.
/**
  * px4_interface/msg/GyroControl.msg
 */
typedef struct px4_interface__msg__GyroControl
{
  rosidl_runtime_c__String drone_id;
  uint8_t command;
  /// only for TAKEOFF, else 0
  float target_altitude_m;
  /// optional, NaN or 0 if unused
  float yaw_deg;
  /// optional for CONTROL
  float vx_mps;
  /// optional for CONTROL
  float vy_mps;
} px4_interface__msg__GyroControl;

// Struct for a sequence of px4_interface__msg__GyroControl.
typedef struct px4_interface__msg__GyroControl__Sequence
{
  px4_interface__msg__GyroControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_interface__msg__GyroControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_INTERFACE__MSG__DETAIL__GYRO_CONTROL__STRUCT_H_
