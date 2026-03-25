import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class SigmaPublisher(Node):
    def __init__(self):
        super().__init__('sigma_publisher')
        self.publisher_ = self.create_publisher(String, 'sigma_topic', 10)
        timer_period = 1.0  
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = String()
        msg.data = f'Halo dari Sigma! Transmisi data ke-{self.i} berhasil.'
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: "{msg.data}"')
        self.i += 1

def main(args=None):
    rclpy.init(args=args)
    sigma_publisher = SigmaPublisher()
    rclpy.spin(sigma_publisher)
    sigma_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()