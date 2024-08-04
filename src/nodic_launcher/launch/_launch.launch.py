from launch import LaunchDescription
from launch_ros.actions import Node

from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    return LaunchDescription([
        # Node(
        #     package='py_pubsub',
        #     executable='listener', 
        #     name='nodic_listener',
        #     ),
        # Node( 
        #     package='py_pubsub',
        #     executable='talker',
        #     name='nodic_talker', 
        #     ),
        # Node(
        #     package='python_parameters',
        #     executable='param_node',
        #     name='param_node',
        #     parameters = [
        #         {'my_parameter':'my default param'}
        #     ]
        # )
        # Node(
        #     package='tf2_ros',
        #     executable='static_transform_publisher',
        #     arguments=['--x', '0', '--y', '0', '--z', '1', '--yaw', '0', '--pitch', '0', '--roll', '0', '--frame-id', 'world', '--child-frame-id', 'mystaticturtle']
        # )
        # Node(
        #     package='turtlesim',
        #     executable='turtlesim_node',
        #     name='sim'
        # ),
        # Node(
        #     package='learning_tf2_py',
        #     executable='turtle_tf2_broadcaster',
        #     name='broadcaster1',
        #     parameters=[
        #         {'turtlename': 'turtle1'}
        #     ]
        # ),
        # DeclareLaunchArgument(
        #     'target_frame', default_value='carrot1', #change target frame here
        #     description='Target frame name.'
        # ),
        # Node(
        #     package='learning_tf2_py',
        #     executable='turtle_tf2_broadcaster',
        #     name='broadcaster2',
        #     parameters=[
        #         {'turtlename': 'turtle2'}
        #     ]
        # ),
        


        # Node(
        #     package='learning_tf2_py',
        #     executable='fixed_frame_tf2_broadcaster',
        #     name='fixed_broadcaster',
        # ),
        # Node(
        #     package='learning_tf2_py',
        #     executable='dynamic_frame_tf2_broadcaster',
        #     name='dynamic_broadcaster',
        # ),
        Node(
            package='learning_tf2_py',
            executable='my_tf2_broadcaster',
            name='my_tf2_broadcaster'
        ),
        Node(
            package='learning_tf2_py',
            executable='turtle_tf2_listener',
            name='listener',
            parameters=[
                {'target_frame': LaunchConfiguration('world')}
            ]
        ),
    ])

