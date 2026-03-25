import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class SigmaSubscriber(Node):
    def __init__(self):
        super().__init__('sigma_subscriber')
        self.subscription = self.create_subscription(
            String,
            'sigma_topic',
            self.listener_callback,
            10)
        self.subscription

    def listener_callback(self, msg):
        self.get_logger().info(f'Menerima pesan: "{msg.data}"')

def main(args=None):
    rclpy.init(args=args)
    sigma_subscriber = SigmaSubscriber()
    rclpy.spin(sigma_subscriber)
    sigma_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()  