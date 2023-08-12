#include <bits/stdc++.h>
#include "rclcpp/rclcpp.hpp"
#include "custom_msgs/msg/pose3_d_stamped.hpp" 
using namespace std;
//will this work??
struct Quaternion{
    double w,i,j,k;
};
struct Pose3D{
    double x, y, z;
    Quaternion rot;
};
string cameraID = "pose";
string PoseToString(Pose3D){

}
class Camera : public rclcpp::Node{

    public:
        Camera() : Node(cameraID){
            publisher = this->create_publisher<custom_msgs::msg::Pose3D>(cameraID, 1);
            //update();
            //timer = this->create_wall_timer(50ms, std::bind(&Camera::update, this));
        }
    private:
        void update(){
            auto message = custom_msgs::msg::Pose3D();
            Pose3D tempe = Pose3D{0,0,0,Quaternion{0,0,0,0}};
            message.x = tempe.x;
            message.y = tempe.y;
            message.z = tempe.z;
            message.w.w = tempe.rot.w;
            message.w.i = tempe.rot.i;
            message.w.j = tempe.rot.j;
            message.w.k = tempe.rot.k;
            //TODO:add some debug statements maybe
            publisher->publish(message); 
        }
    rclcpp::Publisher<custom_msgs::msg::Pose3D>::SharedPtr publisher;
    //rclcpp::TimerBase::SharedPtr timer;
};

int main(int argc, char * argv[]){
    string cameraInfo = argv[1];
   

    rclcpp::init(argc, argv);
    auto node = std::make_shared<Camera>();
    rclcpp::spin(node);
    rclcpp:: shutdown();
    return 0;

}