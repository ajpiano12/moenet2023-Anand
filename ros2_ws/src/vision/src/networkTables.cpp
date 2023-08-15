#include "custom_msgs/msg/pose3_d.hpp"
#include "custom_msgs/srv/publish_to_rio.hpp"
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
            accel = this-> create_publisher<custom_msgs::msg::Pose3D>("accel", 1);

            bestPose = this->create_subscription<custom_msgs::msg::Pose3D>
            ("/combiner/combinedPose", 1, std::bind(&NetworkTable :: poseUpdate, this, _1));

            client = create_client<custom_msgs::srv::PublishToRio>("publish_to_rio");

            update();

        }
    private:
        void poseUpdate(const custom_msgs::msg::Pose3D::SharedPtr msg){
            auto request = std::make_shared<custom_msgs::srv::PublishToRio::Request>();
            request-> a = *msg;
            auto future = client->async_send_request(request);

            // Wait for the response and handle it
            auto result = future.get();
        }
        void update(){
            auto message = custom_msgs::msg::Pose3D();
            auto acceler = custom_msgs::msg::Pose3D();
            odometry->publish(message);
            accel->publish(acceler);
        }

    rclcpp::Subscription<custom_msgs::msg::Pose3D>::SharedPtr bestPose;

    rclcpp::Publisher<custom_msgs::msg::Pose3D>::SharedPtr odometry;
    rclcpp::Publisher<custom_msgs::msg::Pose3D>::SharedPtr accel;

    rclcpp::Client<custom_msgs::srv::PublishToRio>::SharedPtr client;
   
}; 


int main(int argc, char * argv[]){

    rclcpp::init(argc, argv);
    rclcpp::spin(make_shared<NetworkTable>());
    rclcpp::shutdown();

    return 0;
}

