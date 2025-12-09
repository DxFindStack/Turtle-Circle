#include<rclcpp/rclcpp.hpp>
#include"geometry_msgs/msg/twist.hpp"
#include"chrono"

   class TurtleCircleNode: public rclcpp::Node
   {
   private:
      rclcpp::TimerBase::SharedPtr timer_;
      rclcpp::Publicsher<geometry_msgs::msg::Twist>::SharedPtr Publicsher_;  //发布者的智能指针
   public:
      explicit TurtleCircleNode(const std::string& node_name):Node(node_name)
      {
         publicher_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1_cmd_vel", 10);
         timer_ = this->create_wall_timer(1000ms,std::bind(&TurtleCircleNode::timer_callback,this));
      }
      void timer_callback()
      {
         auto msg = geometry_msgs::msg::Twist();
         msg.linear.x = 1.0;
         msg.linear.z = 0.5;
         publisher_->publish(msg);
      }

   } ;

   int main(int argc,char* argv[])
   {
      rclcpp::init(argc,argv);
      auto node = std::make_shared<TurtleCircleNode>("turtle_node");
      rclcpp::spin(node);
      rclcpp::shutdown();
   }