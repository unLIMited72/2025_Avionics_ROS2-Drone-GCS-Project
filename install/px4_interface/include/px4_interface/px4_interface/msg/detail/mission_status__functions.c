// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_interface:msg/MissionStatus.idl
// generated code does not contain a copyright notice
#include "px4_interface/msg/detail/mission_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mission_id`
// Member `drone_ids`
#include "rosidl_runtime_c/string_functions.h"

bool
px4_interface__msg__MissionStatus__init(px4_interface__msg__MissionStatus * msg)
{
  if (!msg) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__init(&msg->mission_id)) {
    px4_interface__msg__MissionStatus__fini(msg);
    return false;
  }
  // state
  // drone_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->drone_ids, 0)) {
    px4_interface__msg__MissionStatus__fini(msg);
    return false;
  }
  return true;
}

void
px4_interface__msg__MissionStatus__fini(px4_interface__msg__MissionStatus * msg)
{
  if (!msg) {
    return;
  }
  // mission_id
  rosidl_runtime_c__String__fini(&msg->mission_id);
  // state
  // drone_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->drone_ids);
}

bool
px4_interface__msg__MissionStatus__are_equal(const px4_interface__msg__MissionStatus * lhs, const px4_interface__msg__MissionStatus * rhs)
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
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // drone_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->drone_ids), &(rhs->drone_ids)))
  {
    return false;
  }
  return true;
}

bool
px4_interface__msg__MissionStatus__copy(
  const px4_interface__msg__MissionStatus * input,
  px4_interface__msg__MissionStatus * output)
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
  // state
  output->state = input->state;
  // drone_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->drone_ids), &(output->drone_ids)))
  {
    return false;
  }
  return true;
}

px4_interface__msg__MissionStatus *
px4_interface__msg__MissionStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_interface__msg__MissionStatus * msg = (px4_interface__msg__MissionStatus *)allocator.allocate(sizeof(px4_interface__msg__MissionStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_interface__msg__MissionStatus));
  bool success = px4_interface__msg__MissionStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_interface__msg__MissionStatus__destroy(px4_interface__msg__MissionStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_interface__msg__MissionStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_interface__msg__MissionStatus__Sequence__init(px4_interface__msg__MissionStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_interface__msg__MissionStatus * data = NULL;

  if (size) {
    data = (px4_interface__msg__MissionStatus *)allocator.zero_allocate(size, sizeof(px4_interface__msg__MissionStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_interface__msg__MissionStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_interface__msg__MissionStatus__fini(&data[i - 1]);
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
px4_interface__msg__MissionStatus__Sequence__fini(px4_interface__msg__MissionStatus__Sequence * array)
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
      px4_interface__msg__MissionStatus__fini(&array->data[i]);
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

px4_interface__msg__MissionStatus__Sequence *
px4_interface__msg__MissionStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_interface__msg__MissionStatus__Sequence * array = (px4_interface__msg__MissionStatus__Sequence *)allocator.allocate(sizeof(px4_interface__msg__MissionStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_interface__msg__MissionStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_interface__msg__MissionStatus__Sequence__destroy(px4_interface__msg__MissionStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_interface__msg__MissionStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_interface__msg__MissionStatus__Sequence__are_equal(const px4_interface__msg__MissionStatus__Sequence * lhs, const px4_interface__msg__MissionStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_interface__msg__MissionStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_interface__msg__MissionStatus__Sequence__copy(
  const px4_interface__msg__MissionStatus__Sequence * input,
  px4_interface__msg__MissionStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_interface__msg__MissionStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_interface__msg__MissionStatus * data =
      (px4_interface__msg__MissionStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_interface__msg__MissionStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_interface__msg__MissionStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_interface__msg__MissionStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
