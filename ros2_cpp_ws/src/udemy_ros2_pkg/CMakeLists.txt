cmake_minimum_required(VERSION 3.8)
project(udemy_ros2_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(OpenCV REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(sensor_msgs)
find_package(action_msgs)
find_package(geometry_msgs)
find_package(rclcpp_action)

# Generate custom interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/OddEvenCheck.srv"
  "srv/ImageFromAngle.srv"
  "action/Navigate.action"
  ADD_LINTER_TESTS
  DEPENDENCIES
  sensor_msgs geometry_msgs action_msgs

)

# Set support for using custom interfac es in C++ from this package
rosidl_get_typesupport_target(cpp_typesupport_target "${PROJECT_NAME}" "rosidl_typesupport_cpp")

add_executable(publisher src/publisher.cpp)
add_executable(subscriber src/subscriber.cpp)
ament_target_dependencies(publisher rclcpp std_msgs)
ament_target_dependencies(subscriber rclcpp std_msgs)
add_executable(rpm_pub src/publisher_rpm.cpp)
ament_target_dependencies(rpm_pub rclcpp std_msgs)

add_executable(speed_calculation src/pub_sub_speed.cpp)
ament_target_dependencies(speed_calculation rclcpp std_msgs)

add_executable(service_server src/service_server.cpp)
ament_target_dependencies(service_server rclcpp std_msgs)
target_link_libraries(service_server "${cpp_typesupport_target}")

add_executable(service_client src/service_client.cpp)
ament_target_dependencies(service_client rclcpp std_msgs)
target_link_libraries(service_client "${cpp_typesupport_target}")


add_executable(camera_service src/camera_service.cpp)
ament_target_dependencies(camera_service rclcpp sensor_msgs OpenCV cv_bridge std_msgs)
target_link_libraries(camera_service "${cpp_typesupport_target}")

add_executable(camera_client src/camera_client.cpp)
ament_target_dependencies(camera_client rclcpp sensor_msgs OpenCV cv_bridge std_msgs)
target_link_libraries(camera_client "${cpp_typesupport_target}")

add_executable(action_server src/action_server.cpp)
ament_target_dependencies(action_server rclcpp std_msgs geometry_msgs action_msgs rclcpp_action)
target_link_libraries(action_server "${cpp_typesupport_target}")



# config for ROS2 cli tools
install(TARGETS
  publisher
  subscriber
  rpm_pub
  speed_calculation
  service_server
  service_client
  camera_client
  camera_service
  action_server
  DESTINATION lib/${PROJECT_NAME}

  )

install( DIRECTORY
launch
DESTINATION share/${PROJECT_NAME}/
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
