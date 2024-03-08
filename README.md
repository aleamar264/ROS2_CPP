The first step is configure the workspace.

```json
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [],
            "compilerPath": "/usr/bin/gcc",
            "cStandard": "c17",
            "cppStandard": "gnu++17",
            "intelliSenseMode": "linux-gcc-x64"
        },
        {
            "name": "ROS",
            "includePath": [
				"${workspaceFolder}/**",
				"/opt/ros/humble/include/**",
			    "/home/your/workspace/include/**"
            ],
            "defines": [],
            "compilerPath": "/usr/bin/gcc",
            "cStandard": "c17",
            "cppStandard": "gnu++17",
            "intelliSenseMode": "linux-gcc-x64"
        }
    ],
    "version": 4
}
```

With this, in the includePath we have the autocomplete for C++

- First, we the imports
	```cpp
	#include "rclcpp/rclcpp.hpp"
	#include "std_msgs/msg/string.hpp"
	#inclde <chrono>
	#incude <functional>
	```
- The use of namespace, this for more human time
	```cpp
	using namespace std::chrono_literals;
	```
- Create the class, the node name should be in snake case
	```cpp
class HelloWorldPubNode : public rclcpp::Node {
public:
  HelloWorldPubNode() : Node("hello_world_pub_node") {
    publisher_ =
        this->create_publisher<std_msgs::msg::String>("hello_world", 10);
    timer_ = this->create_wall_timer(
        1s, std::bind(&HelloWorldPubNode::publish_hello_world, this));
  }

private:
  void publish_hello_world() {
    auto msg = std_msgs::msg::String();
    msg.data = "Hello World!" + std::to_string(counter_);
    publisher_->publish(msg);
    counter_++;
  };

  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
  size_t counter_ = 0;
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<HelloWorldPubNode>());
  rclcpp::shutdown();

  return 0;
}
	```

## How debug ROS code
```shell
colcon build --cmake-args -DCMAKE_BUILD_TYPE=RelWithDebInfo
```

From the class we comment the publisher:
```cpp
public:
  HelloWorldPubNode() : Node("hello_world_pub_node") {
    // publisher_ =
    //     this->create_publisher<std_msgs::msg::String>("hello_world", 10);
    timer_ = this->create_wall_timer(
        1s, std::bind(&HelloWorldPubNode::publish_hello_world, this));
  }
```

On VSCode in the part of `.vscode` we create a `launch.json`
```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "C++ Debugger",
            "request": "launch",
            "type": "cppdbg",
            "miDebuggerServerAddress": "localhost:3000",
            "cwd": "/",
            "program": "/path/for/the/app/to/debug"
        }
    ]
}

```

And install the following packages:
```shell
sudo apt install gcc gdb gdbserver -y
```
With this we are ready to debug our code
```shell
ros2 run --prefix 'gdbserver localhost:3000'  udemy_ros2_pkg publisher
```
![[Pasted image 20240229175107.png]]

## Loggers

For use the logger we need to write
```cpp
RCLCPP_INFO(this->get_logger(), msg.data.c_str());
```

With this we enable the logger. The advantages of this are:
- Get the info in screen
- Get the info in the log file create in `~/.ros/log`

To run logs in debug mode we need to things:
```cpp
RCLCPP_DEBUG(this->get_logger(), msg.data.c_str());
```
```shell
ros2 run <package> <executable> --ros-args --log-level <node_name>:=debug
```

## Node parameters

Node parameters are variable parameters using in nodes.

```shell
ros2 param list
ros2 param get <node_name> <param_name>
ros2 param set <node_name> <param_name> value
ros2 run <pacakge> <execuable> --ros-args -p param_name:=value
```

In code we can declare the parameters in 2 ways
```cpp
this->declare_paramater<type>("param_name", value);
...
private:
	void fn_name(){
	this->get_parameter("param_name", variable);
	}
	type variable = value;
```

```cpp
this->declare_paramater<type>("param_name", value);
...
private:
	void fn_name(){
	rclcpp::Parameter object = this->get_parameter("param_name");
	}

```

## Services

```srv
type_field request_attr_name
---
type_field response_attr_name
```

```xml
 <build_depend>rosidl_default_generators</build_depend>
  <exec_depend>rosidl_default_runtime</exec_depend>
  <member_of_group>rosidl_interface_packages</member_of_group>
```

```cmake
find_package(rosidl_default_generators REQUIRED)

# Generate custom interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/OddEvenCheck.srv"
  ADD_LINTER_TESTS
)

# Set support for using custom interfac es in C++ from this package
rosidl_get_typesupport_target(cpp_typesupport_target "${PROJECT_NAME}" "rosidl_typesupport_cpp")
...

add_executable(service_server src/service_server.cpp)
ament_target_dependencies(service_server rclcpp std_msgs)
target_link_libraries(service_server "${cpp_typesupport_target}")
```

- Terminal command
```shell
ros2 interface list
ros2 service list
ros2 service call <sevice_name> <srv_type> <req>
```

## Actions

```
ros2 action list
```

## Advance Features
### Local Networks ROS Communication
**Domain**:
```shell
export ROS_DOMAIN_ID=1 # First computer
export ROS_DOMAIN_ID=2 # Second computer
```
When the 'bots' are connected to the same network but with different DOMAIN_ID they don't share any information, to share information should match the DOMAIN_ID in both. This also work in localhost.

### Security
```shell
take ~/sros2_demo
ros2 security create_keystore demo_keystore
ros2 security create_enclave demo_keystore <name_of_the_node_to_secure>
```

```shell
export ROS_SECURITY_KEYSTORE=~/sros2_demo/demo_keystore
export ROS_SECURITY_ENABLE=true
export ROS_SECURITY_STRATEGY=Enforce
```

```shell
ros2 run <node> <executable> --ros-args --enclave <enclave>
```
