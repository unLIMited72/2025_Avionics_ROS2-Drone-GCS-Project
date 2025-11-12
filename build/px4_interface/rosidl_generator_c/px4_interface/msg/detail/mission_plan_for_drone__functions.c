// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_interface:msg/MissionPlanForDrone.idl
// generated code does not contain a copyright notice
#include "px4_interface/msg/detail/mission_plan_for_drone__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mission_id`
// Member `drone_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `waypoints`
#include "px4_interface/msg/detail/mission_waypoint__functions.h"

bool
px4_interface__msg__MissionPlanForDrone__init(px4_interface__msg__MissionPlanForDrone * msg)
{
  if (!msg) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__init(&msg->mission_id)) {
    px4_interface__msg__MissionPlanForDrone__fini(msg);
    return false;
  }
  // drone_id
  if (!rosidl_runtime_c__String__init(&msg->drone_id)) {
    px4_interface__msg__MissionPlanForDrone__fini(msg);
    return false;
  }
  // waypoints
  if (!px4_interface__msg__MissionWaypoint__Sequence__init(&msg->waypoints, 0)) {
    px4_interface__msg__MissionPlanForDrone__fini(msg);
    return false;
  }
  // cruise_altitude_m
  // cruise_speed_mps
  // landing_mode
  // spacing_type
  // spacing_value
  // sequential_launch
  // order_by_id
  // heading_to_next_wp
  return true;
}

void
px4_interface__msg__MissionPlanForDrone__fini(px4_interface__msg__MissionPlanForDrone * msg)
{
  if (!msg) {
    return;
  }
  // mission_id
  rosidl_runtime_c__String__fini(&msg->mission_id);
  // drone_id
  rosidl_runtime_c__String__fini(&msg->drone_id);
  // waypoints
  px4_interface__msg__MissionWaypoint__Sequence__fini(&msg->waypoints);
  // cruise_altitude_m
  // cruise_speed_mps
  // landing_mode
  // spacing_type
  // spacing_value
  // sequential_launch
  // order_by_id
  // heading_to_next_wp
}

bool
px4_interface__msg__MissionPlanForDrone__are_equal(const px4_interface__msg__MissionPlanForDrone * lhs, const px4_interface__msg__MissionPlanForDrone * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_id), &(rhs->mission_id)))
  {
    return false;
  }
  // drone_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->drone_id), &(rhs->drone_id)))
  {
    return false;
  }
  // waypoints
  if (!px4_interface__msg__MissionWaypoint__Sequence__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  // cruise_altitude_m
  if (lhs->cruise_altitude_m != rhs->cruise_altitude_m) {
    return false;
  }
  // cruise_speed_mps
  if (lhs->cruise_speed_mps != rhs->cruise_speed_mps) {
    return false;
  }
  // landing_mode
  if (lhs->landing_mode != rhs->landing_mode) {
    return false;
  }
  // spacing_type
  if (lhs->spacing_type != rhs->spacing_type) {
    return false;
  }
  // spacing_value
  if (lhs->spacing_value != rhs->spacing_value) {
    return false;
  }
  // sequential_launch
  if (lhs->sequential_launch != rhs->sequential_launch) {
    return false;
  }
  // order_by_id
  if (lhs->order_by_id != rhs->order_by_id) {
    return false;
  }
  // heading_to_next_wp
  if (lhs->heading_to_next_wp != rhs->heading_to_next_wp) {
    return false;
  }
  return true;
}

bool
px4_interface__msg__MissionPlanForDrone__copy(
  const px4_interface__msg__MissionPlanForDrone * input,
  px4_interface__msg__MissionPlanForDrone * output)
{
  if (!input || !output) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_id), &(output->mission_id)))
  {
    return false;
  }
  // drone_id
  if (!rosidl_runtime_c__String__copy(
      &(input->drone_id), &(output->drone_id)))
  {
    return false;
  }
  // waypoints
  if (!px4_interface__msg__MissionWaypoint__Sequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  // cruise_altitude_m
  output->cruise_altitude_m = input->cruise_altitude_m;
  // cruise_speed_mps
  output->cruise_speed_mps = input->cruise_speed_mps;
  // landing_mode
  output->landing_mode = input->landing_mode;
  // spacing_type
  output->spacing_type = input->spacing_type;
  // spacing_value
  output->spacing_value = input->spacing_value;
  // sequential_launch
  output->sequential_launch = input->sequential_launch;
  // order_by_id
  output->order_by_id = input->order_by_id;
  // heading_to_next_wp
  output->heading_to_next_wp = input->heading_to_next_wp;
  return true;
}

px4_interface__msg__MissionPlanForDrone *
px4_interface__msg__MissionPlanForDrone__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_interface__msg__MissionPlanForDrone * msg = (px4_interface__msg__MissionPlanForDrone *)allocator.allocate(sizeof(px4_interface__msg__MissionPlanForDrone), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_interface__msg__MissionPlanForDrone));
  bool success = px4_interface__msg__MissionPlanForDrone__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_interface__msg__MissionPlanForDrone__destroy(px4_interface__msg__MissionPlanForDrone * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_interface__msg__MissionPlanForDrone__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_interface__msg__MissionPlanForDrone__Sequence__init(px4_interface__msg__MissionPlanForDrone__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_interface__msg__MissionPlanForDrone * data = NULL;

  if (size) {
    data = (px4_interface__msg__MissionPlanForDrone *)allocator.zero_allocate(size, sizeof(px4_interface__msg__MissionPlanForDrone), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_interface__msg__MissionPlanForDrone__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_interface__msg__MissionPlanForDrone__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
px4_interface__msg__MissionPlanForDrone__Sequence__fini(px4_interface__msg__MissionPlanForDrone__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_interface__msg__MissionPlanForDrone__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

px4_interface__msg__MissionPlanForDrone__Sequence *
px4_interface__msg__MissionPlanForDrone__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_interface__msg__MissionPlanForDrone__Sequence * array = (px4_interface__msg__MissionPlanForDrone__Sequence *)allocator.allocate(sizeof(px4_interface__msg__MissionPlanForDrone__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_interface__msg__MissionPlanForDrone__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_interface__msg__MissionPlanForDrone__Sequence__destroy(px4_interface__msg__MissionPlanForDrone__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_interface__msg__MissionPlanForDrone__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_interface__msg__MissionPlanForDrone__Sequence__are_equal(const px4_interface__msg__MissionPlanForDrone__Sequence * lhs, const px4_interface__msg__MissionPlanForDrone__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_interface__msg__MissionPlanForDrone__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_interface__msg__MissionPlanForDrone__Sequence__copy(
  const px4_interface__msg__MissionPlanForDrone__Sequence * input,
  px4_interface__msg__MissionPlanForDrone__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_interface__msg__MissionPlanForDrone);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_interface__msg__MissionPlanForDrone * data =
      (px4_interface__msg__MissionPlanForDrone *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_interface__msg__MissionPlanForDrone__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_interface__msg__MissionPlanForDrone__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_interface__msg__MissionPlanForDrone__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
