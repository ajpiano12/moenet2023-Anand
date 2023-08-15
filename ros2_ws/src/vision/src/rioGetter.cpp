#include "rclcpp/rclcpp.hpp"
#include "custom_msgs/srv/get_from_rio.hpp"
#include "custom_msgs/msg/pose3_d.hpp"
#include "ntcore_cpp.h"

using namespace std;
class subscribe{

    NT_Subscriber sub1;
    NT_Subscriber sub2;

    public:
        explicit subscribe(NT_Topic topic1, NT_Topic topic2){
            sub1 = nt::Subscribe(topic1, NT_DOUBLE_ARRAY, "double_array");
            sub2 = nt::Subscribe(topic2, NT_DOUBLE_ARRAY, "double_array");
        }

        std::shared_ptr<custom_msgs::srv::GetFromRio::Response> getInfo(){
            std::shared_ptr<custom_msgs::srv::GetFromRio::Response> resp;
            double defaultArr[7] = {0,0,0,0,0,0,0};
            auto odometry = nt::GetDoubleArray(sub1, defaultArr);
            auto accel = nt::GetDoubleArray(sub2, defaultArr);
            resp->b.x = odometry[0];
            resp->b.y = odometry[1];
            resp->b.z = odometry[2];
            resp->b.w.w = odometry[3];
            resp->b.w.i = odometry[4];
            resp->b.w.j = odometry[5];
            resp->b.w.k = odometry[6];

            resp->c.x = accel[0];
            resp->c.y = accel[1];
            resp->c.z = accel[2];
            resp->c.w.w = accel[3];
            resp->c.w.i = accel[4];
            resp->c.w.j = accel[5];
            resp->c.w.k = accel[6];
            
            return resp;
        }
        ~subscribe() {
            nt::Unsubscribe(sub1);
            nt::Unsubscribe(sub2);
        }


};


void publishPose(const std::shared_ptr<custom_msgs::srv::GetFromRio::Request> request,
          std::shared_ptr<custom_msgs::srv::GetFromRio::Response>      response){
    subscribe getFromRio (nt::GetTopic(nt::GetDefaultInstance(), "odometry"), nt::GetTopic(nt::GetDefaultInstance(), "acceleration"));
    response = getFromRio.getInfo();
}


int main(int argc, char **argv){
    

    rclcpp::init(argc, argv);

    shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("get_from_rio");

    rclcpp::Service<custom_msgs::srv::GetFromRio>::SharedPtr service = 
    node->create_service<custom_msgs::srv::GetFromRio>("get_from_rio", &publishPose);

    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}