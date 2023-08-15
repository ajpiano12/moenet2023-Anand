#include "custom_msgs/msg/pose3_d.hpp"
#include "custom_msgs/srv/publish_to_rio.hpp"
#include "custom_msgs/srv/get_from_rio.hpp"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"


#define  _1 std::placeholders::_1

using namespace std;

class NetworkTable : public rclcpp::Node{
    public:
        NetworkTable() : Node("network_table"){
            odometry = this->create_publisher<custom_msgs::msg::Pose3D>("odom", 1);
            accel = this-> create_publisher<custom_msgs::msg::Pose3D>("accel", 1);

            bestPose = this->create_subscription<custom_msgs::msg::Pose3D>
            ("/combiner/combinedPose", 1, std::bind(&NetworkTable :: poseUpdate, this, _1));

            clientA = create_client<custom_msgs::srv::PublishToRio>("publish_to_rio");
            clientB = create_client<custom_msgs::srv::GetFromRio>("get_from_rio");

            update();

        }
    private:
        void poseUpdate(const custom_msgs::msg::Pose3D::SharedPtr msg){
            auto request = std::make_shared<custom_msgs::srv::PublishToRio::Request>();
            request-> a = *msg;
            auto future = clientA->async_send_request(request);

            // Wait for the response and handle it
            auto result = future.get();
        }
        void update(){
            auto request = std::make_shared<custom_msgs::srv::GetFromRio::Request>();
            request -> a = true;
            auto future = clientB->async_send_request(request);

            auto result = future.get();
            auto message = result->b;
            auto acceler = result->c;
            odometry->publish(message);
            accel->publish(acceler);
        }

    rclcpp::Subscription<custom_msgs::msg::Pose3D>::SharedPtr bestPose;

    rclcpp::Publisher<custom_msgs::msg::Pose3D>::SharedPtr odometry;
    rclcpp::Publisher<custom_msgs::msg::Pose3D>::SharedPtr accel;

    rclcpp::Client<custom_msgs::srv::PublishToRio>::SharedPtr clientA;
    rclcpp::Client<custom_msgs::srv::GetFromRio>::SharedPtr clientB;
   
}; 


int main(int argc, char * argv[]){

    rclcpp::init(argc, argv);
    rclcpp::spin(make_shared<NetworkTable>());
    rclcpp::shutdown();

    return 0;
}

