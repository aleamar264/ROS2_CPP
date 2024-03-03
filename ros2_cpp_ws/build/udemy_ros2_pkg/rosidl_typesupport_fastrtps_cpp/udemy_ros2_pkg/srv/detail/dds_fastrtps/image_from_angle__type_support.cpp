// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from udemy_ros2_pkg:srv/ImageFromAngle.idl
// generated code does not contain a copyright notice
#include "udemy_ros2_pkg/srv/detail/image_from_angle__rosidl_typesupport_fastrtps_cpp.hpp"
#include "udemy_ros2_pkg/srv/detail/image_from_angle__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace udemy_ros2_pkg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_udemy_ros2_pkg
cdr_serialize(
  const udemy_ros2_pkg::srv::ImageFromAngle_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: angle
  cdr << ros_message.angle;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_udemy_ros2_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  udemy_ros2_pkg::srv::ImageFromAngle_Request & ros_message)
{
  // Member: angle
  cdr >> ros_message.angle;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_udemy_ros2_pkg
get_serialized_size(
  const udemy_ros2_pkg::srv::ImageFromAngle_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: angle
  {
    size_t item_size = sizeof(ros_message.angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_udemy_ros2_pkg
max_serialized_size_ImageFromAngle_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = udemy_ros2_pkg::srv::ImageFromAngle_Request;
    is_plain =
      (
      offsetof(DataType, angle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ImageFromAngle_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const udemy_ros2_pkg::srv::ImageFromAngle_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ImageFromAngle_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<udemy_ros2_pkg::srv::ImageFromAngle_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ImageFromAngle_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const udemy_ros2_pkg::srv::ImageFromAngle_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ImageFromAngle_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ImageFromAngle_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ImageFromAngle_Request__callbacks = {
  "udemy_ros2_pkg::srv",
  "ImageFromAngle_Request",
  _ImageFromAngle_Request__cdr_serialize,
  _ImageFromAngle_Request__cdr_deserialize,
  _ImageFromAngle_Request__get_serialized_size,
  _ImageFromAngle_Request__max_serialized_size
};

static rosidl_message_type_support_t _ImageFromAngle_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ImageFromAngle_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace udemy_ros2_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_udemy_ros2_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<udemy_ros2_pkg::srv::ImageFromAngle_Request>()
{
  return &udemy_ros2_pkg::srv::typesupport_fastrtps_cpp::_ImageFromAngle_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, udemy_ros2_pkg, srv, ImageFromAngle_Request)() {
  return &udemy_ros2_pkg::srv::typesupport_fastrtps_cpp::_ImageFromAngle_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::Image &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::Image &);
size_t get_serialized_size(
  const sensor_msgs::msg::Image &,
  size_t current_alignment);
size_t
max_serialized_size_Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace udemy_ros2_pkg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_udemy_ros2_pkg
cdr_serialize(
  const udemy_ros2_pkg::srv::ImageFromAngle_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: image_from_angle
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.image_from_angle,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_udemy_ros2_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  udemy_ros2_pkg::srv::ImageFromAngle_Response & ros_message)
{
  // Member: image_from_angle
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.image_from_angle);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_udemy_ros2_pkg
get_serialized_size(
  const udemy_ros2_pkg::srv::ImageFromAngle_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: image_from_angle

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.image_from_angle, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_udemy_ros2_pkg
max_serialized_size_ImageFromAngle_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: image_from_angle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = udemy_ros2_pkg::srv::ImageFromAngle_Response;
    is_plain =
      (
      offsetof(DataType, image_from_angle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ImageFromAngle_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const udemy_ros2_pkg::srv::ImageFromAngle_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ImageFromAngle_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<udemy_ros2_pkg::srv::ImageFromAngle_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ImageFromAngle_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const udemy_ros2_pkg::srv::ImageFromAngle_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ImageFromAngle_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ImageFromAngle_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ImageFromAngle_Response__callbacks = {
  "udemy_ros2_pkg::srv",
  "ImageFromAngle_Response",
  _ImageFromAngle_Response__cdr_serialize,
  _ImageFromAngle_Response__cdr_deserialize,
  _ImageFromAngle_Response__get_serialized_size,
  _ImageFromAngle_Response__max_serialized_size
};

static rosidl_message_type_support_t _ImageFromAngle_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ImageFromAngle_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace udemy_ros2_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_udemy_ros2_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<udemy_ros2_pkg::srv::ImageFromAngle_Response>()
{
  return &udemy_ros2_pkg::srv::typesupport_fastrtps_cpp::_ImageFromAngle_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, udemy_ros2_pkg, srv, ImageFromAngle_Response)() {
  return &udemy_ros2_pkg::srv::typesupport_fastrtps_cpp::_ImageFromAngle_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace udemy_ros2_pkg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ImageFromAngle__callbacks = {
  "udemy_ros2_pkg::srv",
  "ImageFromAngle",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, udemy_ros2_pkg, srv, ImageFromAngle_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, udemy_ros2_pkg, srv, ImageFromAngle_Response)(),
};

static rosidl_service_type_support_t _ImageFromAngle__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ImageFromAngle__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace udemy_ros2_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_udemy_ros2_pkg
const rosidl_service_type_support_t *
get_service_type_support_handle<udemy_ros2_pkg::srv::ImageFromAngle>()
{
  return &udemy_ros2_pkg::srv::typesupport_fastrtps_cpp::_ImageFromAngle__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, udemy_ros2_pkg, srv, ImageFromAngle)() {
  return &udemy_ros2_pkg::srv::typesupport_fastrtps_cpp::_ImageFromAngle__handle;
}

#ifdef __cplusplus
}
#endif
