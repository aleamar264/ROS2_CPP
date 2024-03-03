#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/header.hpp"
#include "udemy_ros2_pkg/srv/image_from_angle.hpp"
#include <cv_bridge/cv_bridge.h>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

typedef udemy_ros2_pkg::srv::ImageFromAngle ImageFromAngle;

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  auto service_client_node =
      rclcpp::Node::make_shared("camera_image_client_node");
  auto client =
      service_client_node->create_client<ImageFromAngle>("image_from_angle");
  auto request = std::make_shared<ImageFromAngle::Request>();
  std::cout << "Which angle you want to see? ";
  std::cin >> request->angle;
  client->wait_for_service();
  auto result = client->async_send_request(request);
  if (rclcpp::spin_until_future_complete(service_client_node, result) ==
      rclcpp::FutureReturnCode::SUCCESS) {
    auto cv_ptr = cv_bridge::toCvCopy(result.get()->image_from_angle, "bgr8");
    auto image = cv_ptr->image;
    cv::imshow("Robot Camera Image", image);
    cv::waitKey(0);
  };
}
