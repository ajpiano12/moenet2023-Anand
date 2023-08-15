#include "msg_type.hpp"

#include "frc/geometry/Pose3d.h"
#include "custom_msgs/msg/pose3d.hpp"

#include "frc/geometry/Quaternion.h"
#include "custom_msgs/msg/quaternion.hpp"

#include "frc/geometry/Rotation3d.h"
#include "custom_msgs/msg/rotation3d.hpp"

#include "frc/geometry/Translation3d.h"
#include "custom_msgs/msg/translation3d.hpp"

namespace msg_type{
    frc::Quaternion Quaternion_to_type(custom_msgs::msg::Quaternion& quaternion){
        float w = quaternion.w, i = quaternion.i, j = quaternion.j, k = quaternion.k;
        frc::Quaternion rt(w,i,j,k);
        return rt;
    }

    frc::Rotation3d Rotation3d_to_type(custom_msgs::msg::Rotation3d& rotation3d){
        frc::Rotation3d rt(Quaternion_to_type(rotation3d.q));
        return rt;
    }

    frc::Translation3d Translation3d_to_type(custom_msgs::msg::Translation3d& translation3d){
        float x = translation3d.x, y = translation3d.y, z = translation3d.z;
        frc::Translation3d rt(x,y,z);
        return rt;
    }

    frc::Pose3d Pose3d_to_type(custom_msgs::msg::Pose3d& pose3d){
        frc::Pose3d rt(
            Translation3d_to_type(pose3d.t),
            Rotation3d_to_type(pose3d.r));
        return rt;
    }
}