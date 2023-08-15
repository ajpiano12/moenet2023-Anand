#include "msg_type.hpp"

#include "frc/geometry/Pose3d.h"
#include "custom_msgs/msg/pose3d.hpp"

#include "frc/geometry/Quaternion.h"
#include "custom_msgs/msg/quaternion.hpp"

#include "frc/geometry/Rotation3d.h"
#include "custom_msgs/msg/rotation3d.hpp"

#include "frc/geometry/Translation3d.h"
#include "custom_msgs/msg/translation3d.hpp"

#include <units/length.h>

namespace msg_type{
    frc::Quaternion Quaternion_to_type(custom_msgs::msg::Quaternion& quaternion){
        float w = quaternion.w, i = quaternion.i, j = quaternion.j, k = quaternion.k;
        return frc::Quaternion(w,i,j,k);
    }

    frc::Rotation3d Rotation3d_to_type(custom_msgs::msg::Rotation3d& rotation3d){
        return frc::Rotation3d(Quaternion_to_type(rotation3d.q));
    }

    frc::Translation3d Translation3d_to_type(custom_msgs::msg::Translation3d& translation3d){
        float x = translation3d.x, y = translation3d.y, z = translation3d.z;
        return frc::Translation3d(
            units::meter_t{x},
            units::meter_t{y},
            units::meter_t{z});
    }

    frc::Pose3d Pose3d_to_type(custom_msgs::msg::Pose3d& pose3d){
        return frc::Pose3d(
            Translation3d_to_type(pose3d.t),
            Rotation3d_to_type(pose3d.r));
    }
}