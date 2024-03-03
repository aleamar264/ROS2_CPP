#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/header.hpp"
#include "udemy_ros2_pkg/srv/image_from_angle.hpp"
#include <cv_bridge/cv_bridge.h>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

typedef udemy_ros2_pkg::srv::ImageFromAngle ImageFromAngle;

class CameraServiceNode : public rclcpp::Node {
public:
  CameraServiceNode(std::string exe_dir) : Node("srv_camera") {

    ws_dir = get_ws_dir(exe_dir);
    image_service_server_ = this->create_service<ImageFromAngle>(
        "image_from_angle",
        std::bind(&CameraServiceNode::image_callback, this,
                  std::placeholders::_1, std::placeholders::_2));
  };

private:
  void image_callback(const ImageFromAngle::Request::SharedPtr request,
                      ImageFromAngle::Response::SharedPtr response) {
    float closest_num = available_angles_[0];
    float angle_dif;
    float smallest_angle = std::abs(request->angle - available_angles_[0]);

    for (int i = 0; i < sizeof(available_angles_); i++) {
      angle_dif = std::abs(request->angle - available_angles_[i]);
      if (angle_dif < smallest_angle) {
        smallest_angle = angle_dif;
        closest_num = available_angles_[i];
      }
    }
    std::string image_to_return_ = ws_dir + "src/udemy_ros2_pkg/img/" +
                                   std::to_string((int)closest_num) + ".png";
    std::cout << image_to_return_ << std::endl;
    auto image = cv::imread(image_to_return_);
    auto image_msg_ptr =
        cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", image).toImageMsg();
    response->image_from_angle = *image_msg_ptr;
  };

  std::string get_ws_dir(std::string exe_dir) {
    std::string::size_type substr_index = exe_dir.find("install");
    return exe_dir.substr(0, substr_index);
  };

  rclcpp::Service<ImageFromAngle>::SharedPtr image_service_server_;
  const float available_angles_[5]{-30, -15, 0, 15, 30};
  std::string ws_dir;
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CameraServiceNode>(argv[0]));
  rclcpp::shutdown();
}

// // read image
// auto image = cv::imread("/path/to/iamge");
// // display
// cv::imshow("Robot camera Iamge", image);
// cv::waitKey(0);

// // COnvert image to ROS format
// auto image_msg_ptr =
//     cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", image).toImageMsg();
// image_msgs = *image_ptr

//              auto cv_ptr =
//     cv_bridge::toCvCopy(result.get()->response_attr_name, "bgr8");
// image = cv_ptr->image;
