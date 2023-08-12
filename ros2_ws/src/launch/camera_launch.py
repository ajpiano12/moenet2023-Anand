from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.actions.declare_launch_argument import DeclareLaunchArgument

def generate_launch_description():
    return LaunchDescription([
        
        DeclareLaunchArgument('json1', default_value = 'temp', 
                              description = 'json file'),
        DeclareLaunchArgument('json2', default_value = 'temp', 
                              description = 'json file'),
        DeclareLaunchArgument('json3', default_value = 'temp', 
                              description = 'json file'),
        DeclareLaunchArgument('json4', default_value = 'temp', 
                              description = 'json file'),                                                                  

        Node(
            package='vision',
            namespace='camera1',
            executable='camera',
            name='camera1',
            arguments=[LaunchConfiguration('json1')]
        ),

        Node(
            package='vision',
            namespace='camera2',
            executable='camera',
            name='camera2',
            arguments=[LaunchConfiguration('json2')]
        ),

        Node(
            package='vision',
            namespace='camera3',
            executable='camera',
            name='camera3',
            arguments=[LaunchConfiguration('json3')]
        ),

        Node(package='vision',
            namespace='camera4',
            executable='camera',
            name='camera4',
            arguments=[LaunchConfiguration('json4')]
        ),

        Node(package='vision',
            namespace='combiner',
            executable='combiner',
            name='combiner'
        )

    ])