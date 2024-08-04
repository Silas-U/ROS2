import rclpy
from rclpy.node import Node

# from std_msgs.msg import String
from more_interfaces.msg import AddressBook

class AddressBookSubscriber(Node):

    def __init__(self):
        super().__init__('address_book_subscriber')
        self.subscription = self.create_subscription(
            # String,
            AddressBook,
            'topic',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        # self.get_logger().info('Ok David nice to meet you: "%s"' % msg.data)
        self.get_logger().info('I heard: "%s" "%s" "%s"' % 
            (msg.first_name, msg.last_name, msg.phone_number)
        )



def main(args=None):
    rclpy.init(args=args)

    address_book_subscriber = AddressBookSubscriber()

    rclpy.spin(address_book_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    address_book_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
