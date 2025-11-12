// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_interface:msg/PX4Status.idl
// generated code does not contain a copyright notice
#include "px4_interface/msg/detail/px4_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `drone_id`
#include "rosidl_runtime_c/string_functions.h"

bool
px4_interface__msg__PX4Status__init(px4_interface__msg__PX4Status * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // drone_id
  if (!rosidl_runtime_c__String__init(&msg->drone_id)) {
    px4_interface__msg__PX4Status__fini(msg);
    return false;
  }
  // heartbeat
  // battery_percentage
  // flight_ready
  // armed
  // status_in_flight
  // latitude
  // longitude
  // heading_deg
  return true;
}

void
px4_interface__msg__PX4Status__fini(px4_interface__msg__PX4Status * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // drone_id
  rosidl_runtime_c__String__fini(&msg->drone_id);
  // heartbeat
  // battery_percentage
  // flight_ready
  // armed
  // status_in_flight
  // latitude
  // longitude
  // heading_deg
}

bool
px4_interface__msg__PX4Status__are_equal(const px4_interface__msg__PX4Status * lhs, const px4_interface__msg__PX4Status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // drone_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->drone_id), &(rhs->drone_id)))
  {
    return false;
  }
  // heartbeat
  if (lhs->heartbeat != rhs->heartbeat) {
    return false;
  }
  // battery_percentage
  if (lhs->battery_percentage != rhs->battery_percentage) {
    return false;
  }
  // flight_ready
  if (lhs->flight_ready != rhs->flight_ready) {
    return false;
  }
  // armed
  if (lhs->armed != rhs->armed) {
    return false;
  }
  // status_in_flight
  if (lhs->status_in_flight != rhs->status_in_flight) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // heading_deg
  if (lhs->heading_deg != rhs->heading_deg) {
    return false;
  }
  return true;
}

bool
px4_interface__msg__PX4Status__copy(
  const px4_interface__msg__PX4Status * input,
  px4_interface__msg__PX4Status * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // drone_id
  if (!rosidl_runtime_c__String__copy(
      &(input->drone_id), &(output->drone_id)))
  {
    return false;
  }
  // heartbeat
  output->heartbeat = input->heartbeat;
  // battery_percentage
  output->battery_percentage = input->battery_percentage;
  // flight_ready
  output->flight_ready = input->flight_ready;
  // armed
  output->armed = input->armed;
  // status_in_flight
  output->status_in_flight = input->status_in_flight;
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // heading_deg
  output->heading_deg = input->heading_deg;
  return true;
}

px4_interface__msg__PX4Status *
px4_interface__msg__PX4Status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_interface__msg__PX4Status * msg = (px4_interface__msg__PX4Status *)allocator.allocate(sizeof(px4_interface__msg__PX4Status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_interface__msg__PX4Status));
  bool success = px4_interface__msg__PX4Status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_interface__msg__PX4Status__destroy(px4_interface__msg__PX4Status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_interface__msg__PX4Status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_interface__msg__PX4Status__Sequence__init(px4_interface__msg__PX4Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_interface__msg__PX4Status * data = NULL;

  if (size) {
    data = (px4_interface__msg__PX4Status *)allocator.zero_allocate(size, sizeof(px4_interface__msg__PX4Status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_interface__msg__PX4Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_interface__msg__PX4Status__fini(&data[i - 1]);
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
px4_interface__msg__PX4Status__Sequence__fini(px4_interface__msg__PX4Status__Sequence * array)
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
      px4_interface__msg__PX4Status__fini(&array->data[i]);
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

px4_interface__msg__PX4Status__Sequence *
px4_interface__msg__PX4Status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_interface__msg__PX4Status__Sequence * array = (px4_interface__msg__PX4Status__Sequence *)allocator.allocate(sizeof(px4_interface__msg__PX4Status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_interface__msg__PX4Status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_interface__msg__PX4Status__Sequence__destroy(px4_interface__msg__PX4Status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_interface__msg__PX4Status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_interface__msg__PX4Status__Sequence__are_equal(const px4_interface__msg__PX4Status__Sequence * lhs, const px4_interface__msg__PX4Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_interface__msg__PX4Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_interface__msg__PX4Status__Sequence__copy(
  const px4_interface__msg__PX4Status__Sequence * input,
  px4_interface__msg__PX4Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_interface__msg__PX4Status);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_interface__msg__PX4Status * data =
      (px4_interface__msg__PX4Status *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_interface__msg__PX4Status__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_interface__msg__PX4Status__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_interface__msg__PX4Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
