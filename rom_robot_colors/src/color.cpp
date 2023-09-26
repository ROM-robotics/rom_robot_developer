#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class MinimalPublisher : public rclcpp::Node
{
public:
  MinimalPublisher() : Node("color_node"), count_(0)
  {
    publisher_ = this->create_publisher<std_msgs::msg::String>("color", 10);
    timer_ = this->create_wall_timer(
      500ms, std::bind(&MinimalPublisher::timer_callback, this));

      RCLCPP_INFO(this->get_logger(), "WHITE COLOR");
      RCLCPP_INFO_STREAM(this->get_logger(), "\033[1;30m" << "Dark Gray    " << "\033[1;0m ");
      RCLCPP_INFO_STREAM(this->get_logger(), "\033[1;31m" << "Light Red" << "\033[1;0m ");
      RCLCPP_INFO_STREAM(this->get_logger(), "\033[1;32m" << "Light Green " << "\033[1;0m ");
      RCLCPP_INFO_STREAM(this->get_logger(), "\033[1;33m" << "Yellow " << "\033[1;0m ");
      RCLCPP_INFO_STREAM(this->get_logger(), "\033[1;34m" << "Light Blue " << "\033[1;0m ");
      RCLCPP_INFO_STREAM(this->get_logger(), "\033[1;35m" << "Light Purple " << "\033[1;0m ");
      RCLCPP_INFO_STREAM(this->get_logger(), "\033[1;36m" << "Light Cyan" << "\033[1;0m ");
      RCLCPP_INFO_STREAM(this->get_logger(), "\033[1;37m" << "White " << "\033[1;0m ");

      RCLCPP_INFO_STREAM(this->get_logger(), "\033[0;30m" << "Black" << "\033[1;0m ");
      RCLCPP_INFO_STREAM(this->get_logger(), "\033[0;31m" << "Red" << "\033[1;0m ");
      RCLCPP_INFO_STREAM(this->get_logger(), "\033[0;32m" << "Green " << "\033[1;0m ");
      RCLCPP_INFO_STREAM(this->get_logger(), "\033[0;33m" << "Brown/Orange " << "\033[1;0m ");
      RCLCPP_INFO_STREAM(this->get_logger(), "\033[0;34m" << "Blue " << "\033[1;0m ");
      RCLCPP_INFO_STREAM(this->get_logger(), "\033[0;35m" << "Purple " << "\033[1;0m ");
      RCLCPP_INFO_STREAM(this->get_logger(), "\033[0;36m" << "Cyan" << "\033[1;0m ");
      RCLCPP_INFO_STREAM(this->get_logger(), "\033[0;37m" << "Light Gray " << "\033[1;0m ");
  }

private:
  void timer_callback()
  {
    auto message = std_msgs::msg::String();
    message.data = "Hello, world! " + std::to_string(count_++);
    //RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
    //publisher_->publish(message);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}
