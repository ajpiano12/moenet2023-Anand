//subscriber node to get info from network tables and cam nodes
#include "custom_msgs/msg/pose3_d.hpp"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"
#define  _1 std::placeholders::_1
using namespace std;

struct Quaternion{
    double w,i,j,k;
};
struct Pose3D{
    double x, y, z;
    Quaternion rot;
};

Pose3D msgToPos(custom_msgs::msg::Pose3D::SharedPtr place){
    Pose3D ans;
    ans.x = place->x;
    ans.y = place->y;
    ans.z = place->z;
    ans.rot = Quaternion{place->w.w, place->w.i, place->w.j, place->w.k};
    return ans;
}
Pose3D reading1, reading2, reading3, reading4;
Pose3D SLAM1, SLAM2, SLAM3, SLAM4;
Pose3D odoReading;
double acceleration;

Pose3D updatePose(){
    Pose3D temp = {0,0,0,Quaternion{0,0,0,0}};
    return temp;
    //DO SOME FANCY MATH HERE
}

class Combiner : public rclcpp::Node{
    public:
        Combiner() : Node("combiner"){
            cam1 = this->create_subscription<custom_msgs::msg::Pose3D>
            ("/camera1/pose", 1, std::bind(&Combiner::cam1Info, this, _1));
            cam2 = this->create_subscription<custom_msgs::msg::Pose3D>
            ("/camera2/pose", 1, std::bind(&Combiner::cam2Info, this, _1));
            cam3 = this->create_subscription<custom_msgs::msg::Pose3D>
            ("/camera3/pose", 1, std::bind(&Combiner::cam3Info, this, _1));
            cam4 = this->create_subscription<custom_msgs::msg::Pose3D>
            ("/camera4/pose", 1, std::bind(&Combiner::cam4Info, this, _1));

            slam1 = this->create_subscription<custom_msgs::msg::Pose3D>
            ("/camera1/slam", 1, std::bind(&Combiner::slam1Info, this, _1));
            slam2 = this->create_subscription<custom_msgs::msg::Pose3D>
            ("/camera2/slam", 1, std::bind(&Combiner::slam2Info, this, _1));
            slam3 = this->create_subscription<custom_msgs::msg::Pose3D>
            ("/camera3/slam", 1, std::bind(&Combiner::slam3Info, this, _1));
            slam4 = this->create_subscription<custom_msgs::msg::Pose3D>
            ("/camera4/slam", 1, std::bind(&Combiner::slam4Info, this, _1));

            odom = this->create_subscription<custom_msgs::msg::Pose3D>
            ("/network/odom", 1, std::bind(&Combiner::odomInfo, this, _1));
            accel = this->create_subscription<std_msgs::msg::Float64>
            ("/network/accel", 1, std::bind(&Combiner::accelInfo, this, _1));

            publisher = this->create_publisher<custom_msgs::msg::Pose3D>
            ("combinedPose", 1);
            publish();

        }
    private:
        void cam1Info(const custom_msgs::msg::Pose3D::SharedPtr msg){reading1 = msgToPos(msg);}
        void cam2Info(const custom_msgs::msg::Pose3D::SharedPtr msg){reading2 = msgToPos(msg);}
        void cam3Info(const custom_msgs::msg::Pose3D::SharedPtr msg){reading3 = msgToPos(msg);}
        void cam4Info(const custom_msgs::msg::Pose3D::SharedPtr msg){reading4 = msgToPos(msg);}
        
        void slam1Info(const custom_msgs::msg::Pose3D::SharedPtr msg){SLAM1 = msgToPos(msg);}
        void slam2Info(const custom_msgs::msg::Pose3D::SharedPtr msg){SLAM2 = msgToPos(msg);}
        void slam3Info(const custom_msgs::msg::Pose3D::SharedPtr msg){SLAM3 = msgToPos(msg);}
        void slam4Info(const custom_msgs::msg::Pose3D::SharedPtr msg){SLAM4 = msgToPos(msg);}

        void odomInfo(const custom_msgs::msg::Pose3D::SharedPtr msg){odoReading = msgToPos(msg);}
        void accelInfo(const std_msgs::msg::Float64::SharedPtr msg){acceleration = msg->data;}

        void publish(){
            auto message = custom_msgs::msg::Pose3D();
            Pose3D tempe = updatePose();
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

    rclcpp::Subscription<custom_msgs::msg::Pose3D>::SharedPtr cam1;    
    rclcpp::Subscription<custom_msgs::msg::Pose3D>::SharedPtr cam2; 
    rclcpp::Subscription<custom_msgs::msg::Pose3D>::SharedPtr cam3; 
    rclcpp::Subscription<custom_msgs::msg::Pose3D>::SharedPtr cam4; 

    rclcpp::Subscription<custom_msgs::msg::Pose3D>::SharedPtr slam1;    
    rclcpp::Subscription<custom_msgs::msg::Pose3D>::SharedPtr slam2; 
    rclcpp::Subscription<custom_msgs::msg::Pose3D>::SharedPtr slam3; 
    rclcpp::Subscription<custom_msgs::msg::Pose3D>::SharedPtr slam4;

    rclcpp::Subscription<custom_msgs::msg::Pose3D>::SharedPtr odom;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr accel;

    rclcpp::Publisher<custom_msgs::msg::Pose3D>::SharedPtr publisher;
};

int main(int argc, char * argv[]){

    rclcpp::init(argc, argv);
    rclcpp::spin(make_shared<Combiner>());
    rclcpp::shutdown();
    return 0;
}