// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_interface:msg/UIStatus.idl
// generated code does not contain a copyright notice
#include "px4_interface/msg/detail/ui_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `drone_ids`
#include "rosidl_runtime_c/string_functions.h"
// Member `heartbeats`
// Member `battery_percentages`
// Member `flight_readies`
// Member `armeds`
// Member `status_in_flights`
// Member `latitudes`
// Member `longitudes`
// Member `heading_degs`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
px4_interface__msg__UIStatus__init(px4_interface__msg__UIStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // drone_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->drone_ids, 0)) {
    px4_interface__msg__UIStatus__fini(msg);
    return false;
  }
  // heartbeats
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->heartbeats, 0)) {
    px4_interface__msg__UIStatus__fini(msg);
    return false;
  }
  // battery_percentages
  if (!rosidl_runtime_c__float__Sequence__init(&msg->battery_percentages, 0)) {
    px4_interface__msg__UIStatus__fini(msg);
    return false;
  }
  // flight_readies
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->flight_readies, 0)) {
    px4_interface__msg__UIStatus__fini(msg);
    return false;
  }
  // armeds
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->armeds, 0)) {
    px4_interface__msg__UIStatus__fini(msg);
    return false;
  }
  // status_in_flights
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->status_in_flights, 0)) {
    px4_interface__msg__UIStatus__fini(msg);
    return false;
  }
  // latitudes
  if (!rosidl_runtime_c__double__Sequence__init(&msg->latitudes, 0)) {
    px4_interface__msg__UIStatus__fini(msg);
    return false;
  }
  // longitudes
  if (!rosidl_runtime_c__double__Sequence__init(&msg->longitudes, 0)) {
    px4_interface__msg__UIStatus__fini(msg);
    return false;
  }
  // heading_degs
  if (!rosidl_runtime_c__float__Sequence__init(&msg->heading_degs, 0)) {
    px4_interface__msg__UIStatus__fini(msg);
    return false;
  }
  return true;
}

void
px4_interface__msg__UIStatus__fini(px4_interface__msg__UIStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // drone_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->drone_ids);
  // heartbeats
  rosidl_runtime_c__boolean__Sequence__fini(&msg->heartbeats);
  // battery_percentages
  rosidl_runtime_c__float__Sequence__fini(&msg->battery_percentages);
  // flight_readies
  rosidl_runtime_c__boolean__Sequence__fini(&msg->flight_readies);
  // armeds
  rosidl_runtime_c__boolean__Sequence__fini(&msg->armeds);
  // status_in_flights
  rosidl_runtime_c__uint8__Sequence__fini(&msg->status_in_flights);
  // latitudes
  rosidl_runtime_c__double__Sequence__fini(&msg->latitudes);
  // longitudes
  rosidl_runtime_c__double__Sequence__fini(&msg->longitudes);
  // heading_degs
  rosidl_runtime_c__float__Sequence__fini(&msg->heading_degs);
}

bool
px4_interface__msg__UIStatus__are_equal(const px4_interface__msg__UIStatus * lhs, const px4_interface__msg__UIStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // drone_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->drone_ids), &(rhs->drone_ids)))
  {
    return false;
  }
  // heartbeats
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->heartbeats), &(rhs->heartbeats)))
  {
    return false;
  }
  // battery_percentages
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->battery_percentages), &(rhs->battery_percentages)))
  {
    return false;
  }
  // flight_readies
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->flight_readies), &(rhs->flight_readies)))
  {
    return false;
  }
  // armeds
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->armeds), &(rhs->armeds)))
  {
    return false;
  }
  // status_in_flights
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->status_in_flights), &(rhs->status_in_flights)))
  {
    return false;
  }
  // latitudes
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->latitudes), &(rhs->latitudes)))
  {
    return false;
  }
  // longitudes
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->longitudes), &(rhs->longitudes)))
  {
    return false;
  }
  // heading_degs
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->heading_degs), &(rhs->heading_degs)))
  {
    return false;
  }
  return true;
}

bool
px4_interface__msg__UIStatus__copy(
  const px4_interface__msg__UIStatus * input,
  px4_interface__msg__UIStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // drone_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->drone_ids), &(output->drone_ids)))
  {
    return false;
  }
  // heartbeats
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->heartbeats), &(output->heartbeats)))
  {
    return false;
  }
  // battery_percentages
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->battery_percentages), &(output->battery_percentages)))
  {
    return false;
  }
  // flight_readies
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->flight_readies), &(output->flight_readies)))
  {
    return false;
  }
  // armeds
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->armeds), &(output->armeds)))
  {
    return false;
  }
  // status_in_flights
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->status_in_flights), &(output->status_in_flights)))
  {
    return false;
  }
  // latitudes
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->latitudes), &(output->latitudes)))
  {
    return false;
  }
  // longitudes
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->longitudes), &(output->longitudes)))
  {
    return false;
  }
  // heading_degs
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->heading_degs), &(output->heading_degs)))
  {
    return false;
  }
  return true;
}

px4_interface__msg__UIStatus *
px4_interface__msg__UIStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_interface__msg__UIStatus * msg = (px4_interface__msg__UIStatus *)allocator.allocate(sizeof(px4_interface__msg__UIStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_interface__msg__UIStatus));
  bool success = px4_interface__msg__UIStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_interface__msg__UIStatus__destroy(px4_interface__msg__UIStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_interface__msg__UIStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_interface__msg__UIStatus__Sequence__init(px4_interface__msg__UIStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_interface__msg__UIStatus * data = NULL;

  if (size) {
    data = (px4_interface__msg__UIStatus *)allocator.zero_allocate(size, sizeof(px4_interface__msg__UIStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_interface__msg__UIStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_interface__msg__UIStatus__fini(&data[i - 1]);
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
px4_interface__msg__UIStatus__Sequence__fini(px4_interface__msg__UIStatus__Sequence * array)
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
      px4_interface__msg__UIStatus__fini(&array->data[i]);
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

px4_interface__msg__UIStatus__Sequence *
px4_interface__msg__UIStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_interface__msg__UIStatus__Sequence * array = (px4_interface__msg__UIStatus__Sequence *)allocator.allocate(sizeof(px4_interface__msg__UIStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_interface__msg__UIStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_interface__msg__UIStatus__Sequence__destroy(px4_interface__msg__UIStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_interface__msg__UIStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_interface__msg__UIStatus__Sequence__are_equal(const px4_interface__msg__UIStatus__Sequence * lhs, const px4_interface__msg__UIStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_interface__msg__UIStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_interface__msg__UIStatus__Sequence__copy(
  const px4_interface__msg__UIStatus__Sequence * input,
  px4_interface__msg__UIStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_interface__msg__UIStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_interface__msg__UIStatus * data =
      (px4_interface__msg__UIStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_interface__msg__UIStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_interface__msg__UIStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_interface__msg__UIStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
