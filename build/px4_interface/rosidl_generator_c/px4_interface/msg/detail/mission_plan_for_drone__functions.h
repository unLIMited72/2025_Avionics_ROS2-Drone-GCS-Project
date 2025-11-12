// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from px4_interface:msg/MissionPlanForDrone.idl
// generated code does not contain a copyright notice

#ifndef PX4_INTERFACE__MSG__DETAIL__MISSION_PLAN_FOR_DRONE__FUNCTIONS_H_
#define PX4_INTERFACE__MSG__DETAIL__MISSION_PLAN_FOR_DRONE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "px4_interface/msg/rosidl_generator_c__visibility_control.h"

#include "px4_interface/msg/detail/mission_plan_for_drone__struct.h"

/// Initialize msg/MissionPlanForDrone message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * px4_interface__msg__MissionPlanForDrone
 * )) before or use
 * px4_interface__msg__MissionPlanForDrone__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_interface
bool
px4_interface__msg__MissionPlanForDrone__init(px4_interface__msg__MissionPlanForDrone * msg);

/// Finalize msg/MissionPlanForDrone message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_interface
void
px4_interface__msg__MissionPlanForDrone__fini(px4_interface__msg__MissionPlanForDrone * msg);

/// Create msg/MissionPlanForDrone message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * px4_interface__msg__MissionPlanForDrone__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_interface
px4_interface__msg__MissionPlanForDrone *
px4_interface__msg__MissionPlanForDrone__create();

/// Destroy msg/MissionPlanForDrone message.
/**
 * It calls
 * px4_interface__msg__MissionPlanForDrone__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_interface
void
px4_interface__msg__MissionPlanForDrone__destroy(px4_interface__msg__MissionPlanForDrone * msg);

/// Check for msg/MissionPlanForDrone message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_interface
bool
px4_interface__msg__MissionPlanForDrone__are_equal(const px4_interface__msg__MissionPlanForDrone * lhs, const px4_interface__msg__MissionPlanForDrone * rhs);

/// Copy a msg/MissionPlanForDrone message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_interface
bool
px4_interface__msg__MissionPlanForDrone__copy(
  const px4_interface__msg__MissionPlanForDrone * input,
  px4_interface__msg__MissionPlanForDrone * output);

/// Initialize array of msg/MissionPlanForDrone messages.
/**
 * It allocates the memory for the number of elements and calls
 * px4_interface__msg__MissionPlanForDrone__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_interface
bool
px4_interface__msg__MissionPlanForDrone__Sequence__init(px4_interface__msg__MissionPlanForDrone__Sequence * array, size_t size);

/// Finalize array of msg/MissionPlanForDrone messages.
/**
 * It calls
 * px4_interface__msg__MissionPlanForDrone__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_interface
void
px4_interface__msg__MissionPlanForDrone__Sequence__fini(px4_interface__msg__MissionPlanForDrone__Sequence * array);

/// Create array of msg/MissionPlanForDrone messages.
/**
 * It allocates the memory for the array and calls
 * px4_interface__msg__MissionPlanForDrone__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_interface
px4_interface__msg__MissionPlanForDrone__Sequence *
px4_interface__msg__MissionPlanForDrone__Sequence__create(size_t size);

/// Destroy array of msg/MissionPlanForDrone messages.
/**
 * It calls
 * px4_interface__msg__MissionPlanForDrone__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_interface
void
px4_interface__msg__MissionPlanForDrone__Sequence__destroy(px4_interface__msg__MissionPlanForDrone__Sequence * array);

/// Check for msg/MissionPlanForDrone message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_interface
bool
px4_interface__msg__MissionPlanForDrone__Sequence__are_equal(const px4_interface__msg__MissionPlanForDrone__Sequence * lhs, const px4_interface__msg__MissionPlanForDrone__Sequence * rhs);

/// Copy an array of msg/MissionPlanForDrone messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_interface
bool
px4_interface__msg__MissionPlanForDrone__Sequence__copy(
  const px4_interface__msg__MissionPlanForDrone__Sequence * input,
  px4_interface__msg__MissionPlanForDrone__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PX4_INTERFACE__MSG__DETAIL__MISSION_PLAN_FOR_DRONE__FUNCTIONS_H_
