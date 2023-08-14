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
Pose3D finalAns;
class NetworkTable : public rclcpp::Node{
    public:
        NetworkTable() : Node("network_table"){
            odometry = this->create_publisher<custom_msgs::msg::Pose3D>("odom", 1);
            accel = this-> create_publisher<std_msgs::msg::Float64>("accel", 1);

            bestPose = this->create_subscription<custom_msgs::msg::Pose3D>
            ("/combiner/combinedPose", 1, std::bind(&NetworkTable :: poseUpdate, this, _1));
            update();
        }
    private:
        void poseUpdate(const custom_msgs::msg::Pose3D::SharedPtr msg){finalAns = msgToPos(msg);}
        void update(){
            auto message = custom_msgs::msg::Pose3D();
            auto acceler = std_msgs::msg::Float64();
            odometry->publish(message);
            accel->publish(acceler);
        }

    rclcpp::Subscription<custom_msgs::msg::Pose3D>::SharedPtr bestPose;

    rclcpp::Publisher<custom_msgs::msg::Pose3D>::SharedPtr odometry;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr accel;
}; 


int main(int argc, char * argv[]){

    rclcpp::init(argc, argv);
    rclcpp::spin(make_shared<NetworkTable>());
    rclcpp::shutdown();

    return 0;
}

