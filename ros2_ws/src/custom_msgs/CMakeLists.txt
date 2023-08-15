cmake_minimum_required(VERSION 3.5)
project(custom_msgs)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(wpilib REQUIRED)

file(GLOB msg_type_source
    src/*.cpp
)
add_library(msg_type ${msg_type_source})

target_include_directories(msg_type
                PUBLIC
                $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
                $<INSTALL_INTERFACE:include/msg_type>
)

target_link_libraries(msg_type PUBLIC wpimath)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Rotation3d.msg"
  "msg/Pose3d.msg"
  "msg/Pose3dStamped.msg"
  "srv/Gstam.srv"
  "srv/GetFromRio.srv"
  "srv/PublishToRio.srv"
 )


ament_export_dependencies(rosidl_default_runtime)

ament_package()