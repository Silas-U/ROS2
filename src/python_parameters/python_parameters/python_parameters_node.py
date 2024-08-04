import rclpy
from rclpy.node import Node

class MinimalParam(Node):
    def __init__(self):
        super().__init__('minimal_param_node')

        self.declare_parameter('my_parameter', 'Davido')

        self.timer = self.create_timer(1, self.timer_callback)

    def timer_callback(self):
        my_param = self.get_parameter('my_parameter').get_parameter_value().string_value

        self.get_logger().info('Hello %s!' % my_param)

        my_new_param = rclpy.parameter.Parameter(
            'my_parameter',
            rclpy.Parameter.Type.STRING,
            'Arafat'
        )
        all_new_parameters = [my_new_param]
        self.set_parameters(all_new_parameters)

def main():
    rclpy.init()
    node = MinimalParam()
    rclpy.spin(node)

if __name__ == '__main__':
    main()





# I'm sure these vary a lot depending on your subfield but some of the libraries I've seen pop up a lot are:

#     eigen (c++ linear algebra)

#     mujoco (rigid body simulator)

#     Pinocchio (rigid body algorithms)

#     qpoasis, ipopt, osqp, snopt (optimization problem solvers)

#     pytorch (deep learning)

#     whatever Nvidia calls their GPU physics simulator now

#     whatever the ETH Zurich anymal lab has released


# Yeah, it’s entirely possible to focus only on software to start out.
# I’d focus on learning ROS2 if that’s your goal. 
# A great first project after completing the ROS2 tutorials would be using your computer’s 
# webcam to capture images and then doing some kind of machine vision processing on them. 
# Something like face detection that there exist tutorials for. 
