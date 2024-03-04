#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "udemy_ros2_pkg/action/navigate.hpp"

typedef udemy_ros2_pkg::action::Navigate NavigateAction;
typedef rclcpp_action::ServerGoalHandle<NavigateAction> GoalHandle;
using geometry_msgs::msg::Point;

const float DIST_THRESH = 0.1;

class NavigateActionServerNode : public rclcpp::Node {
public:
  NavigateActionServerNode() : Node("navigate_action_server_node") {
    robot_position_ = Point();
    robot_position_subscription_ = this->create_subscription<Point>(
        "robot_position", 10,
        std::bind(&NavigateActionServerNode::update_position, this,
                  std::placeholders::_1));
    action_server_ = rclcpp_action::create_server<NavigateAction>(
        this, "navigate",
        std::bind(&NavigateActionServerNode::handle_goal, this,
                  std::placeholders::_1, std::placeholders::_2),
        std::bind(&NavigateActionServerNode::cancel_goal, this,
                  std::placeholders::_1),
        std::bind(&NavigateActionServerNode::handle_accepted, this,
                  std::placeholders::_1));
    std::cout << "Navigate Action Server Started" << std::endl;
  };

private:
  void update_position(const Point &msg) { robot_position_ = msg; }

  rclcpp_action::GoalResponse
  handle_goal(const rclcpp_action::GoalUUID &uuid,
              std::shared_ptr<const NavigateAction::Goal> goal) {
    (void)uuid;
    std::cout << "Received goal point(" << goal->goal_point.x << ","
              << goal->goal_point.y << "," << goal->goal_point.z << ")"
              << std::endl;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  };

  rclcpp_action::CancelResponse
  cancel_goal(const std::shared_ptr<GoalHandle> goal_handle) {
    (void)goal_handle;
    std::cout << "Received a request to cancel a goal" << std::endl;

    return rclcpp_action::CancelResponse::ACCEPT;
  };

  void handle_accepted(const std::shared_ptr<GoalHandle> goal_handle) {
    // Start a new thread to prevent block ROS executors
    std::thread{std::bind(&NavigateActionServerNode::execute, this,
                          std::placeholders::_1),
                goal_handle}
        .detach();
  }

  void execute(const std::shared_ptr<GoalHandle> goal_handle) {
    std::cout << "Executing goal" << std::endl;
    auto start_time = rclcpp::Clock().now();

    const auto goal = goal_handle->get_goal();
    auto feedback = std::make_shared<NavigateAction::Feedback>();
    auto result = std::make_shared<NavigateAction::Result>();
    rclcpp::Rate loop_rate(1);
    feedback->distance_to_point = DIST_THRESH;
    while (feedback->distance_to_point >= DIST_THRESH) {
      feedback->distance_to_point =
          std::sqrt(std::pow(this->robot_position_.x - goal->goal_point.x, 2) +
                    std::pow(this->robot_position_.y - goal->goal_point.y, 2) +
                    std::pow(this->robot_position_.z - goal->goal_point.z, 2));
      goal_handle->publish_feedback(feedback);
      loop_rate.sleep();
    }
    result->elapsed_time = (rclcpp::Clock().now() - start_time).seconds();
    goal_handle->succeed(result);
    std::cout << "Goal Succeeded" << std::endl;
  }
  rclcpp_action::Server<NavigateAction>::SharedPtr action_server_;
  Point robot_position_;
  rclcpp::Subscription<Point>::SharedPtr robot_position_subscription_;
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<NavigateActionServerNode>());
  rclcpp::shutdown();
}
