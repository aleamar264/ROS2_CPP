// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from udemy_ros2_pkg:srv/ImageFromAngle.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "udemy_ros2_pkg/srv/detail/image_from_angle__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace udemy_ros2_pkg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ImageFromAngle_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ImageFromAngle_Request_type_support_ids_t;

static const _ImageFromAngle_Request_type_support_ids_t _ImageFromAngle_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ImageFromAngle_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ImageFromAngle_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ImageFromAngle_Request_type_support_symbol_names_t _ImageFromAngle_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, udemy_ros2_pkg, srv, ImageFromAngle_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, udemy_ros2_pkg, srv, ImageFromAngle_Request)),
  }
};

typedef struct _ImageFromAngle_Request_type_support_data_t
{
  void * data[2];
} _ImageFromAngle_Request_type_support_data_t;

static _ImageFromAngle_Request_type_support_data_t _ImageFromAngle_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ImageFromAngle_Request_message_typesupport_map = {
  2,
  "udemy_ros2_pkg",
  &_ImageFromAngle_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ImageFromAngle_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ImageFromAngle_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ImageFromAngle_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ImageFromAngle_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace udemy_ros2_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<udemy_ros2_pkg::srv::ImageFromAngle_Request>()
{
  return &::udemy_ros2_pkg::srv::rosidl_typesupport_cpp::ImageFromAngle_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, udemy_ros2_pkg, srv, ImageFromAngle_Request)() {
  return get_message_type_support_handle<udemy_ros2_pkg::srv::ImageFromAngle_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "udemy_ros2_pkg/srv/detail/image_from_angle__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace udemy_ros2_pkg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ImageFromAngle_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ImageFromAngle_Response_type_support_ids_t;

static const _ImageFromAngle_Response_type_support_ids_t _ImageFromAngle_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ImageFromAngle_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ImageFromAngle_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ImageFromAngle_Response_type_support_symbol_names_t _ImageFromAngle_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, udemy_ros2_pkg, srv, ImageFromAngle_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, udemy_ros2_pkg, srv, ImageFromAngle_Response)),
  }
};

typedef struct _ImageFromAngle_Response_type_support_data_t
{
  void * data[2];
} _ImageFromAngle_Response_type_support_data_t;

static _ImageFromAngle_Response_type_support_data_t _ImageFromAngle_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ImageFromAngle_Response_message_typesupport_map = {
  2,
  "udemy_ros2_pkg",
  &_ImageFromAngle_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ImageFromAngle_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ImageFromAngle_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ImageFromAngle_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ImageFromAngle_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace udemy_ros2_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<udemy_ros2_pkg::srv::ImageFromAngle_Response>()
{
  return &::udemy_ros2_pkg::srv::rosidl_typesupport_cpp::ImageFromAngle_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, udemy_ros2_pkg, srv, ImageFromAngle_Response)() {
  return get_message_type_support_handle<udemy_ros2_pkg::srv::ImageFromAngle_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "udemy_ros2_pkg/srv/detail/image_from_angle__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace udemy_ros2_pkg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ImageFromAngle_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ImageFromAngle_type_support_ids_t;

static const _ImageFromAngle_type_support_ids_t _ImageFromAngle_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ImageFromAngle_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ImageFromAngle_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ImageFromAngle_type_support_symbol_names_t _ImageFromAngle_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, udemy_ros2_pkg, srv, ImageFromAngle)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, udemy_ros2_pkg, srv, ImageFromAngle)),
  }
};

typedef struct _ImageFromAngle_type_support_data_t
{
  void * data[2];
} _ImageFromAngle_type_support_data_t;

static _ImageFromAngle_type_support_data_t _ImageFromAngle_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ImageFromAngle_service_typesupport_map = {
  2,
  "udemy_ros2_pkg",
  &_ImageFromAngle_service_typesupport_ids.typesupport_identifier[0],
  &_ImageFromAngle_service_typesupport_symbol_names.symbol_name[0],
  &_ImageFromAngle_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ImageFromAngle_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ImageFromAngle_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace udemy_ros2_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<udemy_ros2_pkg::srv::ImageFromAngle>()
{
  return &::udemy_ros2_pkg::srv::rosidl_typesupport_cpp::ImageFromAngle_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
