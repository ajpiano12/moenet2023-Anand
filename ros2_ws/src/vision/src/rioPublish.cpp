#include "rclcpp/rclcpp.hpp"
#include "custom_msgs/srv/publish_to_rio.hpp"
using namespace std;
void publish(const std::shared_ptr<custom_msgs::srv::PublishToRio::Request> request,
          std::shared_ptr<custom_msgs::srv::PublishToRio::Response>      response){
    
    

}

int main(int argc, char **argv){

    rclcpp::init(argc, argv);

    shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("publish_to_rio");

    rclcpp::Service<custom_msgs::srv::PublishToRio>::SharedPtr service = 
    node->create_service<custom_msgs::srv::PublishToRio>("publish_to_rio", &publish);

    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}