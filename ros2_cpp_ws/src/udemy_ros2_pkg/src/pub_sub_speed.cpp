#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"
#include <chrono>
#include <functional>
#include <math.h>

using namespace std::chrono_literals;
const float WHEEL_RADIUS = 12.5 / 100;

class SpeedCalcNode : public rclcpp::Node {
public:
  SpeedCalcNode() : Node("speed_calc_node") {
    this->declare_parameter<double>("radius_wheel_param", WHEEL_RADIUS);
    publisher_ = this->create_publisher<std_msgs::msg::Float64>("speed", 10);
    rpm_subscriber_ = this->create_subscription<std_msgs::msg::Float64>(
        "rpm", 10,
        std::bind(&SpeedCalcNode::calculate_and_pub_speed, this,
                  std::placeholders::_1));
    std::cout << "SpeedCalc Node is running.....";
  }

private:
  void calculate_and_pub_speed(const std_msgs::msg::Float64 &rpm_msg) const {
    auto speed_msg = std_msgs::msg::Float64();
    rclcpp::Parameter wheel_radius_object_ =
        this->get_parameter("radius_wheel_param");
    speed_msg.data =
        rpm_msg.data * (2 * M_PI * wheel_radius_object_.as_double()) / 60;
    publisher_->publish(speed_msg);
  }

  rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_;
  rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr rpm_subscriber_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SpeedCalcNode>());
  rclcpp::shutdown();

  return 0;
}
