#include "custom_msgs/msg/pose3_d.hpp"
#include "custom_msgs/srv/publish_to_rio.hpp"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"
#include "frc/geometry/Quaternion.h"
#include "frc/geometry/Pose3d.h"
#include "frc/geometry/Rotation3d.h"
#include "frc/geometry/Translation3d.h"

#define  std::placeholders_1

using namespace std;

class NetworkTable : public rclcpp::Node{
    public:
        NetworkTable() : Node("network_table"){
            odometry = this->create_publisher<custom_msgs::msg::Pose3d>("odom", 1);
            accel = this-> create_publisher<std_msgs::msg::Float64>("accel", 1);

            bestPose = this->create_subscription<custom_msgs::msg::Pose3d>
            ("/combiner/combinedPose", 1, std::bind(&NetworkTable :: poseUpdate, this, std::placeholders_1));

            client = create_client<custom_msgs::srv::PublishToRio>("publish_to_rio");

            update();

        }
    private:
        void poseUpdate(const custom_msgs::msg::Pose3d::SharedPtr msg){
            auto request = std::make_shared<custom_msgs::srv::PublishToRio::Request>();
            request-> a = *msg;
            auto future = client->async_send_request(request);

            // Wait for the response and handle it
            auto result = future.get();
        }
        void update(){
            auto message = custom_msgs::msg::Pose3d();
            auto acceler = std_msgs::msg::Float64();
            odometry->publish(message);
            accel->publish(acceler);
        }

    rclcpp::Subscription<custom_msgs::msg::Pose3d>::SharedPtr bestPose;

    rclcpp::Publisher<custom_msgs::msg::Pose3d>::SharedPtr odometry;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr accel;

    rclcpp::Client<custom_msgs::srv::PublishToRio>::SharedPtr client;
   
}; 


int main(int argc, char * argv[]){

    rclcpp::init(argc, argv);
    rclcpp::spin(make_shared<NetworkTable>());
    rclcpp::shutdown();

    return 0;
}

