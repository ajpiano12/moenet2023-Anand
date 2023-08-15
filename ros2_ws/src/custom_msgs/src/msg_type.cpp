#include "msg_type.hpp"

#include "frc/geometry/Pose3d.h"
#include "msg/pose3d.hpp"

#include "frc/geometry/Rotation3d.h"
#include "frc/geometry/Quaternion.h"
#include "custom_msgs/msg/rotation3d.hpp"

#include "frc/geometry/Translation3d.h"
#include "custom_msgs/msg/translation3d.hpp"

namespace msg_type{
    frc::Pose3d Pose3d_to_type(custom_msgs::msg::Pose3d& pose3d){
        float x = pose3d.x, y = pose3d.y, z = pose3d.z;
        float w = pose3d.q.w, i = pose3d.q.i, j = pose3d.q.j, k = pose3d.q.k;
        return frc::Pose3d::Pose3d(
            frc::Translation3d::Translation3d(x,y,z),
            frc::Rotation3d::Rotation3d(
                frc::Quaternion::Quaternion(w,i,j,k))
        );
    }
}