import rclpy
from rclpy.node import Node

from more_interfaces.msg import AddressBook

class AddressBookPublisher(Node):

    def __init__(self):
        super().__init__('address_book_publisher')
        self.publisher_ = self.create_publisher(AddressBook, 'topic', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = AddressBook()                                                # CHANGE
        msg.first_name = "Silas"
        msg.last_name = "Udofia"
        msg.phone_number = "08160595927"
        msg.phone_type = msg.PHONE_TYPE_MOBILE                                          # CHANGE
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s" "%s" "%s"' % 
            (msg.first_name, msg.last_name, msg.phone_number)    
        )
        

def main(args=None):
    rclpy.init(args=args)

    address_book_publisher = AddressBookPublisher()

    rclpy.spin(address_book_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    address_book_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()        
