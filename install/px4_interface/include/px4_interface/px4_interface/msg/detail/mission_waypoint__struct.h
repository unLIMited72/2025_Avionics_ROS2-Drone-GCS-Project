// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_interface:msg/MissionWaypoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__MISSION_WAYPOINT__STRUCT_H_
#define PX4_INTERFACE__MSG__DETAIL__MISSION_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MissionWaypoint in the package px4_interface.
/**
  * px4_interface/msg/MissionWaypoint.msg
 */
typedef struct px4_interface__msg__MissionWaypoint
{
  uint32_t seq;
  /// deg
  double lat;
  /// deg
  double lon;
  /// meters AMSL or relative
  float alt;
  /// seconds
  float hold_time;
} px4_interface__msg__MissionWaypoint;

// Struct for a sequence of px4_interface__msg__MissionWaypoint.
typedef struct px4_interface__msg__MissionWaypoint__Sequence
{
  px4_interface__msg__MissionWaypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_interface__msg__MissionWaypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_INTERFACE__MSG__DETAIL__MISSION_WAYPOINT__STRUCT_H_
