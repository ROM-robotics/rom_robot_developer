## TERMINAL COLORS

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