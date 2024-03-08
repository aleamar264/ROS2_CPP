from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

# Retrieving information
from ament_index_python.packages import get_package_share_directory
from os.path import join

# Utilizing launch file from other packages
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

# Working with enviromental variables
from launch.actions import SetEnvironmentVariable

# Simulate event handling
from launch.actions import RegisterEventHandler, EmitEvent
from launch.event_handlers import OnProcessExit
from launch.events import Shutdown

# Path variables
ignition_ros_package_path = get_package_share_directory("ros_ign_gazebo")
udemy_ros2_pkg_path = get_package_share_directory("udemy_ros2_pkg")
simulation_world_file_path = join(
    udemy_ros2_pkg_path, "worlds", "wheeled_model_world.sdf"
)
simulation_models_path = join(udemy_ros2_pkg_path, "models")


def generate_launch_description() -> LaunchDescription:
    env = SetEnvironmentVariable(
        name="IGN_GAZEBO_RESOURCE_PATH", value=simulation_models_path
    )
    # simulation = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource(
    #         launch_file_path=join(
    #             ignition_ros_package_path, "launch", "ign_gazebo.launch.py"
    #         )
    #     ),
    #     launch_arguments={
    #         "ign_args": "-r -v 4 --render-engine ogre " + simulation_world_file_path
    #     }.items(),
    # )
    simulation = ExecuteProcess(
        cmd=f"ign gazebo -v 4 -r --render-engine ogre {simulation_world_file_path}".split(
            " "
        ),
        output="screen",
    )
    node_ign_bridge = Node(
        package="ros_ign_bridge",
        executable="parameter_bridge",
        name="ign_bridge",
        arguments=[
            "/model/wheeled_model/cmd_vel@geometry_msgs/msgs/Twist@ignition.msgs.Twist"
        ],
        remappings=[("model/wheeled_model/cmd_vel", "/cmd_vel")],
        output="screen",
    )
    shutdown_handler = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=simulation, on_exit=[EmitEvent(event=Shutdown())]
        )
    )
    ld = LaunchDescription()
    ld.add_action(env)
    ld.add_action(simulation)
    ld.add_action(node_ign_bridge)
    ld.add_action(shutdown_handler)
    return ld
