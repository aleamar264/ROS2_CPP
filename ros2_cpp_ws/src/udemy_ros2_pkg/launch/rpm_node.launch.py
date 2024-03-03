from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

PACKAGE_NAME = "udemy_ros2_pkg"


def generate_launch_description() -> LaunchDescription:
    rpm_node = Node(
        package=PACKAGE_NAME,
        executable="rpm_pub",
        name="rpm_node_pub",
        parameters=[{"rpm_val": 5.0}],
    )

    speed_node = Node(
        package=PACKAGE_NAME,
        executable="speed_calculation",
        name="speed_calc_node",
        parameters=[{"radius_wheel_param": 12.6 / 100}],
    )

    topic_list = ExecuteProcess(cmd="ros2 topic list".split(" "), output="screen")
    echo_speed = ExecuteProcess(
        cmd="ros2 topic echo /speed".split(" "), output="screen"
    )

    ld = LaunchDescription()
    ld.add_action(rpm_node)
    ld.add_action(topic_list)
    ld.add_action(speed_node)
    ld.add_action(echo_speed)
    return ld
