// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_interface:msg/MissionWaypoint.idl
// generated code does not contain a copyright notice
#include "px4_interface/msg/detail/mission_waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_interface__msg__MissionWaypoint__init(px4_interface__msg__MissionWaypoint * msg)
{
  if (!msg) {
    return false;
  }
  // seq
  // lat
  // lon
  // alt
  // hold_time
  return true;
}

void
px4_interface__msg__MissionWaypoint__fini(px4_interface__msg__MissionWaypoint * msg)
{
  if (!msg) {
    return;
  }
  // seq
  // lat
  // lon
  // alt
  // hold_time
}

bool
px4_interface__msg__MissionWaypoint__are_equal(const px4_interface__msg__MissionWaypoint * lhs, const px4_interface__msg__MissionWaypoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // seq
  if (lhs->seq != rhs->seq) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // alt
  if (lhs->alt != rhs->alt) {
    return false;
  }
  // hold_time
  if (lhs->hold_time != rhs->hold_time) {
    return false;
  }
  return true;
}

bool
px4_interface__msg__MissionWaypoint__copy(
  const px4_interface__msg__MissionWaypoint * input,
  px4_interface__msg__MissionWaypoint * output)
{
  if (!input || !output) {
    return false;
  }
  // seq
  output->seq = input->seq;
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  // alt
  output->alt = input->alt;
  // hold_time
  output->hold_time = input->hold_time;
  return true;
}

px4_interface__msg__MissionWaypoint *
px4_interface__msg__MissionWaypoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_interface__msg__MissionWaypoint * msg = (px4_interface__msg__MissionWaypoint *)allocator.allocate(sizeof(px4_interface__msg__MissionWaypoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_interface__msg__MissionWaypoint));
  bool success = px4_interface__msg__MissionWaypoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_interface__msg__MissionWaypoint__destroy(px4_interface__msg__MissionWaypoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_interface__msg__MissionWaypoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_interface__msg__MissionWaypoint__Sequence__init(px4_interface__msg__MissionWaypoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_interface__msg__MissionWaypoint * data = NULL;

  if (size) {
    data = (px4_interface__msg__MissionWaypoint *)allocator.zero_allocate(size, sizeof(px4_interface__msg__MissionWaypoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_interface__msg__MissionWaypoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_interface__msg__MissionWaypoint__fini(&data[i - 1]);
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
px4_interface__msg__MissionWaypoint__Sequence__fini(px4_interface__msg__MissionWaypoint__Sequence * array)
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
      px4_interface__msg__MissionWaypoint__fini(&array->data[i]);
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

px4_interface__msg__MissionWaypoint__Sequence *
px4_interface__msg__MissionWaypoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_interface__msg__MissionWaypoint__Sequence * array = (px4_interface__msg__MissionWaypoint__Sequence *)allocator.allocate(sizeof(px4_interface__msg__MissionWaypoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_interface__msg__MissionWaypoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_interface__msg__MissionWaypoint__Sequence__destroy(px4_interface__msg__MissionWaypoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_interface__msg__MissionWaypoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_interface__msg__MissionWaypoint__Sequence__are_equal(const px4_interface__msg__MissionWaypoint__Sequence * lhs, const px4_interface__msg__MissionWaypoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_interface__msg__MissionWaypoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_interface__msg__MissionWaypoint__Sequence__copy(
  const px4_interface__msg__MissionWaypoint__Sequence * input,
  px4_interface__msg__MissionWaypoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_interface__msg__MissionWaypoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_interface__msg__MissionWaypoint * data =
      (px4_interface__msg__MissionWaypoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_interface__msg__MissionWaypoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_interface__msg__MissionWaypoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_interface__msg__MissionWaypoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
