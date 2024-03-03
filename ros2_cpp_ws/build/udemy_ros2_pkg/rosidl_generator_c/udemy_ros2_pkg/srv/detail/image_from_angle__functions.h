// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from udemy_ros2_pkg:srv/ImageFromAngle.idl
// generated code does not contain a copyright notice

#ifndef UDEMY_ROS2_PKG__SRV__DETAIL__IMAGE_FROM_ANGLE__FUNCTIONS_H_
#define UDEMY_ROS2_PKG__SRV__DETAIL__IMAGE_FROM_ANGLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "udemy_ros2_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "udemy_ros2_pkg/srv/detail/image_from_angle__struct.h"

/// Initialize srv/ImageFromAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * udemy_ros2_pkg__srv__ImageFromAngle_Request
 * )) before or use
 * udemy_ros2_pkg__srv__ImageFromAngle_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
bool
udemy_ros2_pkg__srv__ImageFromAngle_Request__init(udemy_ros2_pkg__srv__ImageFromAngle_Request * msg);

/// Finalize srv/ImageFromAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
void
udemy_ros2_pkg__srv__ImageFromAngle_Request__fini(udemy_ros2_pkg__srv__ImageFromAngle_Request * msg);

/// Create srv/ImageFromAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * udemy_ros2_pkg__srv__ImageFromAngle_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
udemy_ros2_pkg__srv__ImageFromAngle_Request *
udemy_ros2_pkg__srv__ImageFromAngle_Request__create();

/// Destroy srv/ImageFromAngle message.
/**
 * It calls
 * udemy_ros2_pkg__srv__ImageFromAngle_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
void
udemy_ros2_pkg__srv__ImageFromAngle_Request__destroy(udemy_ros2_pkg__srv__ImageFromAngle_Request * msg);

/// Check for srv/ImageFromAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
bool
udemy_ros2_pkg__srv__ImageFromAngle_Request__are_equal(const udemy_ros2_pkg__srv__ImageFromAngle_Request * lhs, const udemy_ros2_pkg__srv__ImageFromAngle_Request * rhs);

/// Copy a srv/ImageFromAngle message.
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
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
bool
udemy_ros2_pkg__srv__ImageFromAngle_Request__copy(
  const udemy_ros2_pkg__srv__ImageFromAngle_Request * input,
  udemy_ros2_pkg__srv__ImageFromAngle_Request * output);

/// Initialize array of srv/ImageFromAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * udemy_ros2_pkg__srv__ImageFromAngle_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
bool
udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence__init(udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence * array, size_t size);

/// Finalize array of srv/ImageFromAngle messages.
/**
 * It calls
 * udemy_ros2_pkg__srv__ImageFromAngle_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
void
udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence__fini(udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence * array);

/// Create array of srv/ImageFromAngle messages.
/**
 * It allocates the memory for the array and calls
 * udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence *
udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence__create(size_t size);

/// Destroy array of srv/ImageFromAngle messages.
/**
 * It calls
 * udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
void
udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence__destroy(udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence * array);

/// Check for srv/ImageFromAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
bool
udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence__are_equal(const udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence * lhs, const udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence * rhs);

/// Copy an array of srv/ImageFromAngle messages.
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
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
bool
udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence__copy(
  const udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence * input,
  udemy_ros2_pkg__srv__ImageFromAngle_Request__Sequence * output);

/// Initialize srv/ImageFromAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * udemy_ros2_pkg__srv__ImageFromAngle_Response
 * )) before or use
 * udemy_ros2_pkg__srv__ImageFromAngle_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
bool
udemy_ros2_pkg__srv__ImageFromAngle_Response__init(udemy_ros2_pkg__srv__ImageFromAngle_Response * msg);

/// Finalize srv/ImageFromAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
void
udemy_ros2_pkg__srv__ImageFromAngle_Response__fini(udemy_ros2_pkg__srv__ImageFromAngle_Response * msg);

/// Create srv/ImageFromAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * udemy_ros2_pkg__srv__ImageFromAngle_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
udemy_ros2_pkg__srv__ImageFromAngle_Response *
udemy_ros2_pkg__srv__ImageFromAngle_Response__create();

/// Destroy srv/ImageFromAngle message.
/**
 * It calls
 * udemy_ros2_pkg__srv__ImageFromAngle_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
void
udemy_ros2_pkg__srv__ImageFromAngle_Response__destroy(udemy_ros2_pkg__srv__ImageFromAngle_Response * msg);

/// Check for srv/ImageFromAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
bool
udemy_ros2_pkg__srv__ImageFromAngle_Response__are_equal(const udemy_ros2_pkg__srv__ImageFromAngle_Response * lhs, const udemy_ros2_pkg__srv__ImageFromAngle_Response * rhs);

/// Copy a srv/ImageFromAngle message.
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
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
bool
udemy_ros2_pkg__srv__ImageFromAngle_Response__copy(
  const udemy_ros2_pkg__srv__ImageFromAngle_Response * input,
  udemy_ros2_pkg__srv__ImageFromAngle_Response * output);

/// Initialize array of srv/ImageFromAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * udemy_ros2_pkg__srv__ImageFromAngle_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
bool
udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence__init(udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence * array, size_t size);

/// Finalize array of srv/ImageFromAngle messages.
/**
 * It calls
 * udemy_ros2_pkg__srv__ImageFromAngle_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
void
udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence__fini(udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence * array);

/// Create array of srv/ImageFromAngle messages.
/**
 * It allocates the memory for the array and calls
 * udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence *
udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence__create(size_t size);

/// Destroy array of srv/ImageFromAngle messages.
/**
 * It calls
 * udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
void
udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence__destroy(udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence * array);

/// Check for srv/ImageFromAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
bool
udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence__are_equal(const udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence * lhs, const udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence * rhs);

/// Copy an array of srv/ImageFromAngle messages.
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
ROSIDL_GENERATOR_C_PUBLIC_udemy_ros2_pkg
bool
udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence__copy(
  const udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence * input,
  udemy_ros2_pkg__srv__ImageFromAngle_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UDEMY_ROS2_PKG__SRV__DETAIL__IMAGE_FROM_ANGLE__FUNCTIONS_H_
