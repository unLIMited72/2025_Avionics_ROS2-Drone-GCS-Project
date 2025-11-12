// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_interface:msg/MissionPlanForDrone.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "px4_interface/msg/detail/mission_plan_for_drone__struct.h"
#include "px4_interface/msg/detail/mission_plan_for_drone__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "px4_interface/msg/detail/mission_waypoint__functions.h"
// end nested array functions include
bool px4_interface__msg__mission_waypoint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * px4_interface__msg__mission_waypoint__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool px4_interface__msg__mission_plan_for_drone__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("px4_interface.msg._mission_plan_for_drone.MissionPlanForDrone", full_classname_dest, 61) == 0);
  }
  px4_interface__msg__MissionPlanForDrone * ros_message = _ros_message;
  {  // mission_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mission_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // drone_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "drone_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->drone_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // waypoints
    PyObject * field = PyObject_GetAttrString(_pymsg, "waypoints");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'waypoints'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!px4_interface__msg__MissionWaypoint__Sequence__init(&(ros_message->waypoints), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create px4_interface__msg__MissionWaypoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    px4_interface__msg__MissionWaypoint * dest = ros_message->waypoints.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!px4_interface__msg__mission_waypoint__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // cruise_altitude_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "cruise_altitude_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cruise_altitude_m = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cruise_speed_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "cruise_speed_mps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cruise_speed_mps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // landing_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "landing_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->landing_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // spacing_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "spacing_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->spacing_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // spacing_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "spacing_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->spacing_value = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sequential_launch
    PyObject * field = PyObject_GetAttrString(_pymsg, "sequential_launch");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sequential_launch = (Py_True == field);
    Py_DECREF(field);
  }
  {  // order_by_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "order_by_id");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->order_by_id = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heading_to_next_wp
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_to_next_wp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heading_to_next_wp = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_interface__msg__mission_plan_for_drone__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MissionPlanForDrone */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_interface.msg._mission_plan_for_drone");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MissionPlanForDrone");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_interface__msg__MissionPlanForDrone * ros_message = (px4_interface__msg__MissionPlanForDrone *)raw_ros_message;
  {  // mission_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mission_id.data,
      strlen(ros_message->mission_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drone_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->drone_id.data,
      strlen(ros_message->drone_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "drone_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waypoints
    PyObject * field = NULL;
    size_t size = ros_message->waypoints.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    px4_interface__msg__MissionWaypoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->waypoints.data[i]);
      PyObject * pyitem = px4_interface__msg__mission_waypoint__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "waypoints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cruise_altitude_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cruise_altitude_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cruise_altitude_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cruise_speed_mps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cruise_speed_mps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cruise_speed_mps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // landing_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->landing_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "landing_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spacing_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->spacing_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spacing_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spacing_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->spacing_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spacing_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sequential_launch
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sequential_launch ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sequential_launch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // order_by_id
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->order_by_id ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "order_by_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_to_next_wp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heading_to_next_wp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_to_next_wp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
