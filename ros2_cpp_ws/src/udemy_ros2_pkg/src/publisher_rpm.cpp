#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"
#include <chrono>
#include <functional>
#include <iostream>

using namespace std::chrono_literals;
const double RPM_DEFAULT_VALUE = 100.0;

class RpmPubNode : public rclcpp::Node {
public:
  RpmPubNode() : Node("rpm_node_pub") {
    this->declare_parameter<double>("rpm_val", RPM_DEFAULT_VALUE);
    publisher_ = this->create_publisher<std_msgs::msg::Float64>("rpm", 10);
    timer_ = this->create_wall_timer(
        1s, std::bind(&RpmPubNode::publish_rpm_cb, this));

    std::cout << "RPM Publisher Node is running....." << std::endl;
  }

private:
  void publish_rpm_cb() {
    auto msg = std_msgs::msg::Float64();
    // this->get_parameter("rpm_val", rpm_val_param_);
    rclcpp::Parameter rpm_val_param_object = this->get_parameter("rpm_val");
    msg.data = rpm_val_param_object.as_double();
    publisher_->publish(msg);
  };

  rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
  // double rpm_val_param_ = RPM_DEFAULT_VALUE;
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<RpmPubNode>());
  rclcpp::shutdown();

  return 0;
}
