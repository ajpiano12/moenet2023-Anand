#ifndef __MSG_TYPE_HPP__
#define __MSG_TYPE_HPP__

#include <frc/geometry/Pose3d.h>
#include <custom_msgs/msg/pose3d.hpp>

#include <frc/geometry/Rotation3d.h>
#include <custom_msgs/msg/rotation3d.hpp>

#include <frc/geometry/Translation3d.h>
#include <custom_msgs/msg/translation3d.hpp>

namespace msg_type{
    frc::Pose3d Pose3d_to_type(custom_msgs::msg::Pose3d& pose3d);
}

#endif