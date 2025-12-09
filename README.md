# Turtle-Circle
利用ROS2实现小海龟画圈
## 一、安装运行环境  
1. **安装 VirtualBox**  
   [VirtualBox 官网下载地址](https://www.virtualbox.org/)  建议安装到D盘   
   VirtualBox是一款开源虚拟机软件，可以利用它在你的计算机上再安装其他操作系统，比如Ros2所需要的Linux操作系统。  
2. **安装 Ubuntu系统**  
   这里采用的是Ubantu22.04系统，一般把基于Linux内核的操作系统都称为Linux系统，而Ubantu就是以桌面应用为主的Linux操作系统之一。  
     [Ubuntu 下载镜像地址](https://mirrors.tuna.tsinghua.edu.cn/ubuntu-releases/22.04.5/)  
   找到这个`ubuntu-22.04.5-desktop-amd64.iso`版本，点击下载即可。  
   （1）下载好了以后，点击VirtualBox中的新建，输入名称Ubuntu22，选择下载好的Ubuntu所在的文件夹，找到Ubuntu，再点击跳过自动安装，如下图所示：  
   <img width="1370" height="688" alt="Ubuntu安装页面" src="https://github.com/user-attachments/assets/3ff9ee78-f2a3-491f-a4a1-799928d626cf" />
   （2）按下图配置好CPU内存，点击下一步。  
   <img width="1075" height="541" alt="CPU大小设置" src="https://github.com/user-attachments/assets/13a90067-8e99-4fb0-aa97-58eed89c2ccb" /> 
   （3）再按下图配置好虚拟硬盘大小，点击下一步。
   <img width="687" height="340" alt="内存大小设置" src="https://github.com/user-attachments/assets/cede21b2-f748-4805-891a-7bffff9704ac" />  
   （4）确认信息无误后，点击完成。  
   <img width="1076" height="538" alt="确认信息" src="https://github.com/user-attachments/assets/e5fa4206-59ef-4045-8526-7d30c49f38da" />  
   （5）回到虚拟机主页面，点击启动，这个时候鼠标不能用，可以用键盘上下键来选中Try or install Ubuntu  
   <img width="899" height="594" alt="选择Try or install Ubuntu" src="https://github.com/user-attachments/assets/1af2bddc-438e-49b5-8c19-2d90d267c78b" />  
   （6）点击捕获，然后回车  
   <img width="897" height="600" alt="捕获" src="https://github.com/user-attachments/assets/e6927f0f-a15f-4333-967b-0457257ed399" />  
   （7）进入Ubuntu界面，选择中文简体，然后点击安装Ubuntu  
   <img width="1596" height="1099" alt="选择中文简体" src="https://github.com/user-attachments/assets/a2837d24-7367-4218-8e06-fed08c7482fc" />  
   （8）为了简化，选择最小安装，其他全取消，点击继续  
   <img width="1590" height="1102" alt="更新与安装" src="https://github.com/user-attachments/assets/c79aa6a0-3272-4153-a937-104bf569a4f2" />  
   （9）安装类型，由于只有一个磁盘选择第一个；如果双系统的话，选择第二个；再点击现在安装。  
   <img width="1596" height="1097" alt="安装类型" src="https://github.com/user-attachments/assets/eff0c7a1-3507-4ff1-91ca-dd3492e6bc26" />  
   （10）点击继续  
   <img width="1595" height="1097" alt="将改动写入磁盘" src="https://github.com/user-attachments/assets/cd8f0c90-508d-4588-ad97-c4cb1ef8c2d9" />  
   （11）选择地区，点击继续  
   <img width="1592" height="1098" alt="选择地区" src="https://github.com/user-attachments/assets/1670a1f8-8056-4332-a9cb-a6e9d779ad1e" />  
   （12）输入个人信息和密码，这里尽量不要出现中文，以英文字母就行，不用太长，密码要尽可能简单一点，防止忘记。  
   <img width="1592" height="1098" alt="输入个人信息和密码" src="https://github.com/user-attachments/assets/e1b56ad1-2364-47d4-af4c-fc1b66131880" />  
   （13）安装完成，点击现在重启  
   <img width="1589" height="1097" alt="安装完成" src="https://github.com/user-attachments/assets/1009b601-deb6-4d39-8f75-2dee6065b9d7" />  
   （14）按回车键  
   <img width="904" height="598" alt="按回车键" src="https://github.com/user-attachments/assets/de7f9f83-e4af-45f8-853e-295b0be38701" />  
   （15）后面输入密码，就可以进入  
   
***注意事项***  
   （1）虚拟硬盘可以给大一点，实际并不会占用那么大，但后期想调整就有点困难了。    
   （2）密码一定要记住，可以输一个简单的，后期输起来也方便。    
  
4. **安装 ROS2**  
   在Ubuntu中安装ROS2，可以通过Ctrl+shift+T打开终端使用一键安装指令
   `wget http://fishros.com/install -O fishros && . fishros`    
   （1）输入2，不更换继续安装  
   <img width="1594" height="1066" alt="第一个选择" src="https://github.com/user-attachments/assets/2cb136bc-cd56-4437-9bd0-1335e9eb494a" />  
   （2）输入1，选择humble（Ros2）  
   <img width="1592" height="1095" alt="第二个选择" src="https://github.com/user-attachments/assets/7776a880-fbca-490c-9848-cf9f5c61d08a" />   
   （3）输入1，选择humble（Ros2）桌面版  
   <img width="1602" height="1097" alt="第三个选择" src="https://github.com/user-attachments/assets/4bd274cf-3b0d-4b6e-8003-de62bc9cb271" />   
   （4）输入密码，即可完成安装   
   （5）检测ROS2安装成功与否  
   <img width="1599" height="1096" alt="检测ROS2安装成功与否" src="https://github.com/user-attachments/assets/9247799d-2f67-49f8-971c-5dac4570a35f" />  
   （6）查找ROS2安装路径，输入whereis ros2，有路径证明安装成功。  
   <img width="1595" height="1095" alt="ROS2的路径查找" src="https://github.com/user-attachments/assets/625f83a8-1612-40b2-8b9f-3c19d9874d89" />  
---
## 二、实现步骤  
1. **打开小海龟模拟器**  
   在Ubuntu系统里Ctrl+Alt+T打开终端，输入`ros2 run turtlesim turtlesim_node`打开小海龟模拟器。  
2. **在Vscode中创建功能包，并实现话题的发布与订阅**  
   （1）vscode中src目录下打开终端，输入`ros2 pkg create demo_cpp_topic --build-type ament_cmake --dependencies rclcpp geometry_msg turtlesim --lincense Apache-2.0`然后回车，创建功能包。    
   （2）在demo_cpp_topic的src目录下创建`turtle_circle.cpp`文件，并在其中写C++代码实现小海龟画圈,如下所示：  
   ```C++
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
   
   ```
3. **添加依赖和可执行文件**    
   在demo_cpp_topic/src目录下找到CMakeList.txt文件,并打开。在其中添加`add_executable(turtle_circle src/turtle_circle)`,  
   `ament_target_dependencies(turtle_circle rclcpp geometry_msgs)`,  
   `install(TARGETS turtle_circle DESTINATION lib/$(PROJECT_NAME))`  
5. **运行测试**  
   （1）在回到工作空间目录打开终端，输入`colcon build`构造可执行文件    
   （2）利用`source install/setup.bash`添加环境变量  
   （3）利用命令`ros2 run demo_cpp_topic turtle_circle`运行  
   最后，打开海龟模拟器，就可以看见小海龟转圈。  

   
---
