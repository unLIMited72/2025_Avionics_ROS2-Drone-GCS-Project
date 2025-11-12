// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_interface:msg/MissionPlan.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__MISSION_PLAN__STRUCT_H_
#define PX4_INTERFACE__MSG__DETAIL__MISSION_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANDING_HOME'.
/**
  * (UI -> planner)
  * Landing mode
 */
enum
{
  px4_interface__msg__MissionPlan__LANDING_HOME = 0
};

/// Constant 'LANDING_LAST_WAYPOINT'.
enum
{
  px4_interface__msg__MissionPlan__LANDING_LAST_WAYPOINT = 1
};

/// Constant 'SPACING_DISTANCE'.
/**
  * Spacing type
  * meters
 */
enum
{
  px4_interface__msg__MissionPlan__SPACING_DISTANCE = 0
};

/// Constant 'SPACING_TIME'.
/**
  * seconds
 */
enum
{
  px4_interface__msg__MissionPlan__SPACING_TIME = 1
};

// Include directives for member types
// Member 'mission_id'
// Member 'drone_ids'
#include "rosidl_runtime_c/string.h"
// Member 'waypoints'
#include "px4_interface/msg/detail/mission_waypoint__struct.h"

/// Struct defined in msg/MissionPlan in the package px4_interface.
/**
  * px4_interface/msg/MissionPlan.msg
 */
typedef struct px4_interface__msg__MissionPlan
{
  rosidl_runtime_c__String mission_id;
  rosidl_runtime_c__String__Sequence drone_ids;
  px4_interface__msg__MissionWaypoint__Sequence waypoints;
  float cruise_altitude_m;
  float cruise_speed_mps;
  uint8_t landing_mode;
  uint8_t spacing_type;
  float spacing_value;
  bool sequential_launch;
  bool order_by_id;
  bool heading_to_next_wp;
} px4_interface__msg__MissionPlan;

// Struct for a sequence of px4_interface__msg__MissionPlan.
typedef struct px4_interface__msg__MissionPlan__Sequence
{
  px4_interface__msg__MissionPlan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_interface__msg__MissionPlan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_INTERFACE__MSG__DETAIL__MISSION_PLAN__STRUCT_H_
