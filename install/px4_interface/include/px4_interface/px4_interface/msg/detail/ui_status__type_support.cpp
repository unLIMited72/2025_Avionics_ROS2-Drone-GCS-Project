// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_interface:msg/UIStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_interface/msg/detail/ui_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace px4_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void UIStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_interface::msg::UIStatus(_init);
}

void UIStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_interface::msg::UIStatus *>(message_memory);
  typed_message->~UIStatus();
}

size_t size_function__UIStatus__drone_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UIStatus__drone_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__UIStatus__drone_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__UIStatus__drone_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__UIStatus__drone_ids(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__UIStatus__drone_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__UIStatus__drone_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__UIStatus__drone_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UIStatus__heartbeats(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__UIStatus__heartbeats(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__UIStatus__heartbeats(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__UIStatus__heartbeats(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UIStatus__battery_percentages(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UIStatus__battery_percentages(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__UIStatus__battery_percentages(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__UIStatus__battery_percentages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__UIStatus__battery_percentages(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__UIStatus__battery_percentages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__UIStatus__battery_percentages(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__UIStatus__battery_percentages(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UIStatus__flight_readies(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__UIStatus__flight_readies(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__UIStatus__flight_readies(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__UIStatus__flight_readies(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UIStatus__armeds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__UIStatus__armeds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__UIStatus__armeds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__UIStatus__armeds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UIStatus__status_in_flights(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UIStatus__status_in_flights(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__UIStatus__status_in_flights(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__UIStatus__status_in_flights(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__UIStatus__status_in_flights(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__UIStatus__status_in_flights(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__UIStatus__status_in_flights(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__UIStatus__status_in_flights(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UIStatus__latitudes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UIStatus__latitudes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__UIStatus__latitudes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__UIStatus__latitudes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__UIStatus__latitudes(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__UIStatus__latitudes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__UIStatus__latitudes(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__UIStatus__latitudes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UIStatus__longitudes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UIStatus__longitudes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__UIStatus__longitudes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__UIStatus__longitudes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__UIStatus__longitudes(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__UIStatus__longitudes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__UIStatus__longitudes(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__UIStatus__longitudes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UIStatus__heading_degs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UIStatus__heading_degs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__UIStatus__heading_degs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__UIStatus__heading_degs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__UIStatus__heading_degs(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__UIStatus__heading_degs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__UIStatus__heading_degs(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__UIStatus__heading_degs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember UIStatus_message_member_array[10] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface::msg::UIStatus, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "drone_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface::msg::UIStatus, drone_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__UIStatus__drone_ids,  // size() function pointer
    get_const_function__UIStatus__drone_ids,  // get_const(index) function pointer
    get_function__UIStatus__drone_ids,  // get(index) function pointer
    fetch_function__UIStatus__drone_ids,  // fetch(index, &value) function pointer
    assign_function__UIStatus__drone_ids,  // assign(index, value) function pointer
    resize_function__UIStatus__drone_ids  // resize(index) function pointer
  },
  {
    "heartbeats",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface::msg::UIStatus, heartbeats),  // bytes offset in struct
    nullptr,  // default value
    size_function__UIStatus__heartbeats,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__UIStatus__heartbeats,  // fetch(index, &value) function pointer
    assign_function__UIStatus__heartbeats,  // assign(index, value) function pointer
    resize_function__UIStatus__heartbeats  // resize(index) function pointer
  },
  {
    "battery_percentages",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface::msg::UIStatus, battery_percentages),  // bytes offset in struct
    nullptr,  // default value
    size_function__UIStatus__battery_percentages,  // size() function pointer
    get_const_function__UIStatus__battery_percentages,  // get_const(index) function pointer
    get_function__UIStatus__battery_percentages,  // get(index) function pointer
    fetch_function__UIStatus__battery_percentages,  // fetch(index, &value) function pointer
    assign_function__UIStatus__battery_percentages,  // assign(index, value) function pointer
    resize_function__UIStatus__battery_percentages  // resize(index) function pointer
  },
  {
    "flight_readies",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface::msg::UIStatus, flight_readies),  // bytes offset in struct
    nullptr,  // default value
    size_function__UIStatus__flight_readies,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__UIStatus__flight_readies,  // fetch(index, &value) function pointer
    assign_function__UIStatus__flight_readies,  // assign(index, value) function pointer
    resize_function__UIStatus__flight_readies  // resize(index) function pointer
  },
  {
    "armeds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface::msg::UIStatus, armeds),  // bytes offset in struct
    nullptr,  // default value
    size_function__UIStatus__armeds,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__UIStatus__armeds,  // fetch(index, &value) function pointer
    assign_function__UIStatus__armeds,  // assign(index, value) function pointer
    resize_function__UIStatus__armeds  // resize(index) function pointer
  },
  {
    "status_in_flights",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface::msg::UIStatus, status_in_flights),  // bytes offset in struct
    nullptr,  // default value
    size_function__UIStatus__status_in_flights,  // size() function pointer
    get_const_function__UIStatus__status_in_flights,  // get_const(index) function pointer
    get_function__UIStatus__status_in_flights,  // get(index) function pointer
    fetch_function__UIStatus__status_in_flights,  // fetch(index, &value) function pointer
    assign_function__UIStatus__status_in_flights,  // assign(index, value) function pointer
    resize_function__UIStatus__status_in_flights  // resize(index) function pointer
  },
  {
    "latitudes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface::msg::UIStatus, latitudes),  // bytes offset in struct
    nullptr,  // default value
    size_function__UIStatus__latitudes,  // size() function pointer
    get_const_function__UIStatus__latitudes,  // get_const(index) function pointer
    get_function__UIStatus__latitudes,  // get(index) function pointer
    fetch_function__UIStatus__latitudes,  // fetch(index, &value) function pointer
    assign_function__UIStatus__latitudes,  // assign(index, value) function pointer
    resize_function__UIStatus__latitudes  // resize(index) function pointer
  },
  {
    "longitudes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface::msg::UIStatus, longitudes),  // bytes offset in struct
    nullptr,  // default value
    size_function__UIStatus__longitudes,  // size() function pointer
    get_const_function__UIStatus__longitudes,  // get_const(index) function pointer
    get_function__UIStatus__longitudes,  // get(index) function pointer
    fetch_function__UIStatus__longitudes,  // fetch(index, &value) function pointer
    assign_function__UIStatus__longitudes,  // assign(index, value) function pointer
    resize_function__UIStatus__longitudes  // resize(index) function pointer
  },
  {
    "heading_degs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_interface::msg::UIStatus, heading_degs),  // bytes offset in struct
    nullptr,  // default value
    size_function__UIStatus__heading_degs,  // size() function pointer
    get_const_function__UIStatus__heading_degs,  // get_const(index) function pointer
    get_function__UIStatus__heading_degs,  // get(index) function pointer
    fetch_function__UIStatus__heading_degs,  // fetch(index, &value) function pointer
    assign_function__UIStatus__heading_degs,  // assign(index, value) function pointer
    resize_function__UIStatus__heading_degs  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UIStatus_message_members = {
  "px4_interface::msg",  // message namespace
  "UIStatus",  // message name
  10,  // number of fields
  sizeof(px4_interface::msg::UIStatus),
  UIStatus_message_member_array,  // message members
  UIStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  UIStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UIStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UIStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace px4_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_interface::msg::UIStatus>()
{
  return &::px4_interface::msg::rosidl_typesupport_introspection_cpp::UIStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_interface, msg, UIStatus)() {
  return &::px4_interface::msg::rosidl_typesupport_introspection_cpp::UIStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
