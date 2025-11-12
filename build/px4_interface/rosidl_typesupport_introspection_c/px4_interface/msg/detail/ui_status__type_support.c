// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_interface:msg/UIStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_interface/msg/detail/ui_status__rosidl_typesupport_introspection_c.h"
#include "px4_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_interface/msg/detail/ui_status__functions.h"
#include "px4_interface/msg/detail/ui_status__struct.h"


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

#ifdef __cplusplus
extern "C"
{
#endif

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__UIStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_interface__msg__UIStatus__init(message_memory);
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__UIStatus_fini_function(void * message_memory)
{
  px4_interface__msg__UIStatus__fini(message_memory);
}

size_t px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__drone_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__drone_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__drone_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__drone_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__drone_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__drone_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__drone_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__drone_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__heartbeats(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__heartbeats(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__heartbeats(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__heartbeats(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__heartbeats(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__heartbeats(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__heartbeats(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__heartbeats(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__battery_percentages(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__battery_percentages(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__battery_percentages(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__battery_percentages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__battery_percentages(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__battery_percentages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__battery_percentages(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__battery_percentages(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__flight_readies(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__flight_readies(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__flight_readies(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__flight_readies(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__flight_readies(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__flight_readies(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__flight_readies(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__flight_readies(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__armeds(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__armeds(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__armeds(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__armeds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__armeds(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__armeds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__armeds(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__armeds(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__status_in_flights(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__status_in_flights(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__status_in_flights(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__status_in_flights(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__status_in_flights(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__status_in_flights(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__status_in_flights(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__status_in_flights(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__latitudes(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__latitudes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__latitudes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__latitudes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__latitudes(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__latitudes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__latitudes(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__latitudes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__longitudes(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__longitudes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__longitudes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__longitudes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__longitudes(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__longitudes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__longitudes(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__longitudes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__heading_degs(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__heading_degs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__heading_degs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__heading_degs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__heading_degs(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__heading_degs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__heading_degs(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__heading_degs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__UIStatus_message_member_array[10] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__UIStatus, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drone_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__UIStatus, drone_ids),  // bytes offset in struct
    NULL,  // default value
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__drone_ids,  // size() function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__drone_ids,  // get_const(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__drone_ids,  // get(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__drone_ids,  // fetch(index, &value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__drone_ids,  // assign(index, value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__drone_ids  // resize(index) function pointer
  },
  {
    "heartbeats",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__UIStatus, heartbeats),  // bytes offset in struct
    NULL,  // default value
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__heartbeats,  // size() function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__heartbeats,  // get_const(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__heartbeats,  // get(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__heartbeats,  // fetch(index, &value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__heartbeats,  // assign(index, value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__heartbeats  // resize(index) function pointer
  },
  {
    "battery_percentages",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__UIStatus, battery_percentages),  // bytes offset in struct
    NULL,  // default value
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__battery_percentages,  // size() function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__battery_percentages,  // get_const(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__battery_percentages,  // get(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__battery_percentages,  // fetch(index, &value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__battery_percentages,  // assign(index, value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__battery_percentages  // resize(index) function pointer
  },
  {
    "flight_readies",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__UIStatus, flight_readies),  // bytes offset in struct
    NULL,  // default value
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__flight_readies,  // size() function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__flight_readies,  // get_const(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__flight_readies,  // get(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__flight_readies,  // fetch(index, &value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__flight_readies,  // assign(index, value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__flight_readies  // resize(index) function pointer
  },
  {
    "armeds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__UIStatus, armeds),  // bytes offset in struct
    NULL,  // default value
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__armeds,  // size() function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__armeds,  // get_const(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__armeds,  // get(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__armeds,  // fetch(index, &value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__armeds,  // assign(index, value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__armeds  // resize(index) function pointer
  },
  {
    "status_in_flights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__UIStatus, status_in_flights),  // bytes offset in struct
    NULL,  // default value
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__status_in_flights,  // size() function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__status_in_flights,  // get_const(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__status_in_flights,  // get(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__status_in_flights,  // fetch(index, &value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__status_in_flights,  // assign(index, value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__status_in_flights  // resize(index) function pointer
  },
  {
    "latitudes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__UIStatus, latitudes),  // bytes offset in struct
    NULL,  // default value
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__latitudes,  // size() function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__latitudes,  // get_const(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__latitudes,  // get(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__latitudes,  // fetch(index, &value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__latitudes,  // assign(index, value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__latitudes  // resize(index) function pointer
  },
  {
    "longitudes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__UIStatus, longitudes),  // bytes offset in struct
    NULL,  // default value
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__longitudes,  // size() function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__longitudes,  // get_const(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__longitudes,  // get(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__longitudes,  // fetch(index, &value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__longitudes,  // assign(index, value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__longitudes  // resize(index) function pointer
  },
  {
    "heading_degs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface__msg__UIStatus, heading_degs),  // bytes offset in struct
    NULL,  // default value
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__size_function__UIStatus__heading_degs,  // size() function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_const_function__UIStatus__heading_degs,  // get_const(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__get_function__UIStatus__heading_degs,  // get(index) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__fetch_function__UIStatus__heading_degs,  // fetch(index, &value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__assign_function__UIStatus__heading_degs,  // assign(index, value) function pointer
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__resize_function__UIStatus__heading_degs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__UIStatus_message_members = {
  "px4_interface__msg",  // message namespace
  "UIStatus",  // message name
  10,  // number of fields
  sizeof(px4_interface__msg__UIStatus),
  px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__UIStatus_message_member_array,  // message members
  px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__UIStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__UIStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__UIStatus_message_type_support_handle = {
  0,
  &px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__UIStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_interface, msg, UIStatus)() {
  if (!px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__UIStatus_message_type_support_handle.typesupport_identifier) {
    px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__UIStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_interface__msg__UIStatus__rosidl_typesupport_introspection_c__UIStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
