// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from udemy_ros2_pkg:srv/ImageFromAngle.idl
// generated code does not contain a copyright notice

#ifndef UDEMY_ROS2_PKG__SRV__DETAIL__IMAGE_FROM_ANGLE__STRUCT_HPP_
#define UDEMY_ROS2_PKG__SRV__DETAIL__IMAGE_FROM_ANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__udemy_ros2_pkg__srv__ImageFromAngle_Request __attribute__((deprecated))
#else
# define DEPRECATED__udemy_ros2_pkg__srv__ImageFromAngle_Request __declspec(deprecated)
#endif

namespace udemy_ros2_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImageFromAngle_Request_
{
  using Type = ImageFromAngle_Request_<ContainerAllocator>;

  explicit ImageFromAngle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0f;
    }
  }

  explicit ImageFromAngle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    udemy_ros2_pkg::srv::ImageFromAngle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const udemy_ros2_pkg::srv::ImageFromAngle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<udemy_ros2_pkg::srv::ImageFromAngle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<udemy_ros2_pkg::srv::ImageFromAngle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      udemy_ros2_pkg::srv::ImageFromAngle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<udemy_ros2_pkg::srv::ImageFromAngle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      udemy_ros2_pkg::srv::ImageFromAngle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<udemy_ros2_pkg::srv::ImageFromAngle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<udemy_ros2_pkg::srv::ImageFromAngle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<udemy_ros2_pkg::srv::ImageFromAngle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__udemy_ros2_pkg__srv__ImageFromAngle_Request
    std::shared_ptr<udemy_ros2_pkg::srv::ImageFromAngle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__udemy_ros2_pkg__srv__ImageFromAngle_Request
    std::shared_ptr<udemy_ros2_pkg::srv::ImageFromAngle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageFromAngle_Request_ & other) const
  {
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageFromAngle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageFromAngle_Request_

// alias to use template instance with default allocator
using ImageFromAngle_Request =
  udemy_ros2_pkg::srv::ImageFromAngle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace udemy_ros2_pkg


// Include directives for member types
// Member 'image_from_angle'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__udemy_ros2_pkg__srv__ImageFromAngle_Response __attribute__((deprecated))
#else
# define DEPRECATED__udemy_ros2_pkg__srv__ImageFromAngle_Response __declspec(deprecated)
#endif

namespace udemy_ros2_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImageFromAngle_Response_
{
  using Type = ImageFromAngle_Response_<ContainerAllocator>;

  explicit ImageFromAngle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_from_angle(_init)
  {
    (void)_init;
  }

  explicit ImageFromAngle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_from_angle(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_from_angle_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_from_angle_type image_from_angle;

  // setters for named parameter idiom
  Type & set__image_from_angle(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image_from_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    udemy_ros2_pkg::srv::ImageFromAngle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const udemy_ros2_pkg::srv::ImageFromAngle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<udemy_ros2_pkg::srv::ImageFromAngle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<udemy_ros2_pkg::srv::ImageFromAngle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      udemy_ros2_pkg::srv::ImageFromAngle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<udemy_ros2_pkg::srv::ImageFromAngle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      udemy_ros2_pkg::srv::ImageFromAngle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<udemy_ros2_pkg::srv::ImageFromAngle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<udemy_ros2_pkg::srv::ImageFromAngle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<udemy_ros2_pkg::srv::ImageFromAngle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__udemy_ros2_pkg__srv__ImageFromAngle_Response
    std::shared_ptr<udemy_ros2_pkg::srv::ImageFromAngle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__udemy_ros2_pkg__srv__ImageFromAngle_Response
    std::shared_ptr<udemy_ros2_pkg::srv::ImageFromAngle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageFromAngle_Response_ & other) const
  {
    if (this->image_from_angle != other.image_from_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageFromAngle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageFromAngle_Response_

// alias to use template instance with default allocator
using ImageFromAngle_Response =
  udemy_ros2_pkg::srv::ImageFromAngle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace udemy_ros2_pkg

namespace udemy_ros2_pkg
{

namespace srv
{

struct ImageFromAngle
{
  using Request = udemy_ros2_pkg::srv::ImageFromAngle_Request;
  using Response = udemy_ros2_pkg::srv::ImageFromAngle_Response;
};

}  // namespace srv

}  // namespace udemy_ros2_pkg

#endif  // UDEMY_ROS2_PKG__SRV__DETAIL__IMAGE_FROM_ANGLE__STRUCT_HPP_
