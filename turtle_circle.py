import rclpy
from rclpy import Node
from geometry_msgs.msg import Twist

class TurtleCircleNode(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.get_logger().info(f'{node_name}节点，启动！')
        self.TurtleCircle_publisher = self.create_publisher(Twist,'/turtle1/cmd_vel',10)  # 创建话题
        self.create_timer(1,self.timer_callback)  # 定义计时器 1秒一次

    def timer_callback(self):
        twist = Twist()  # 组装数据
        twist.linear.x = 1.0
        twist.angular.z = 0.5
        self.TurtleCircle_publisher.publish(twist)  # 发布话题
        self.get_logger().info(f'发布了话题{twist}')


def main():
    rclpy.init()
    node = TurtleCircleNode('TurtleCircleNode')
    rclpy.spin(node)
    rclpy.shutdown()


