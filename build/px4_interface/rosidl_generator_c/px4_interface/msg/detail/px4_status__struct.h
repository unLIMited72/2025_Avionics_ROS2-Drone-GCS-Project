// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_interface:msg/PX4Status.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__PX4_STATUS__STRUCT_H_
#define PX4_INTERFACE__MSG__DETAIL__PX4_STATUS__STRUCT_H_

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
  * enum definitions
 */
enum
{
  px4_interface__msg__PX4Status__FLIGHT_STATUS_NORMAL = 0
};

/// Constant 'FLIGHT_STATUS_WARNING'.
enum
{
  px4_interface__msg__PX4Status__FLIGHT_STATUS_WARNING = 1
};

/// Constant 'FLIGHT_STATUS_DANGER'.
enum
{
  px4_interface__msg__PX4Status__FLIGHT_STATUS_DANGER = 2
};

// Include directives for member types
// Member 'drone_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PX4Status in the package px4_interface.
/**
  * px4_interface/msg/PX4Status.msg
 */
typedef struct px4_interface__msg__PX4Status
{
  uint64_t timestamp;
  rosidl_runtime_c__String drone_id;
  bool heartbeat;
  float battery_percentage;
  bool flight_ready;
  bool armed;
  /// 0=Normal, 1=Warning, 2=Danger
  uint8_t status_in_flight;
  double latitude;
  double longitude;
  float heading_deg;
} px4_interface__msg__PX4Status;

// Struct for a sequence of px4_interface__msg__PX4Status.
typedef struct px4_interface__msg__PX4Status__Sequence
{
  px4_interface__msg__PX4Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_interface__msg__PX4Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_INTERFACE__MSG__DETAIL__PX4_STATUS__STRUCT_H_
