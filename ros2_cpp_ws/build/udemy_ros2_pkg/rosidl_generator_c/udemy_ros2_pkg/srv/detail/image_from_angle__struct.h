// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from udemy_ros2_pkg:srv/ImageFromAngle.idl
// generated code does not contain a copyright notice

#ifndef UDEMY_ROS2_PKG__SRV__DETAIL__IMAGE_FROM_ANGLE__STRUCT_H_
#define UDEMY_ROS2_PKG__SRV__DETAIL__IMAGE_FROM_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ImageFromAngle in the package udemy_ros2_pkg.
typedef struct udemy_ros2_pkg__srv__ImageFromAngle_Request
{
  /// Angle of the camera to move
  float angle;
} udemy_ros2_pkg__srv__ImageFromAngle_Request;

// Struct for a sequence of udemy_ros2_pkg__srv__ImageFromAngle_Request.
typedef struct udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence
{
  udemy_ros2_pkg__srv__ImageFromAngle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'image_from_angle'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/ImageFromAngle in the package udemy_ros2_pkg.
typedef struct udemy_ros2_pkg__srv__ImageFromAngle_Response
{
  sensor_msgs__msg__Image image_from_angle;
} udemy_ros2_pkg__srv__ImageFromAngle_Response;

// Struct for a sequence of udemy_ros2_pkg__srv__ImageFromAngle_Response.
typedef struct udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence
{
  udemy_ros2_pkg__srv__ImageFromAngle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UDEMY_ROS2_PKG__SRV__DETAIL__IMAGE_FROM_ANGLE__STRUCT_H_
