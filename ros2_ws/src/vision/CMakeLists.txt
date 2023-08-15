cmake_minimum_required(VERSION 3.8)
project(vision)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
#find_package(rclcpp_components REQUIRED)
find_package(std_msgs REQUIRED)
find_package(custom_msgs REQUIRED)
find_package(wpilib REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_executable(camera src/camera.cpp)
add_executable(combiner src/combiner.cpp)
add_executable(network src/networkTables.cpp)
add_executable(rioPub src/rioPublish.cpp)

target_link_libraries(camera ntcore wpimath)
ament_target_dependencies(camera rclcpp std_msgs custom_msgs)

target_link_libraries(combiner wpimath)
ament_target_dependencies(combiner rclcpp std_msgs custom_msgs)

ament_target_dependencies(network rclcpp std_msgs custom_msgs)

target_link_libraries(rioPub ntcore wpimath)
ament_target_dependencies(rioPub rclcpp std_msgs custom_msgs)

install(TARGETS
  camera
  combiner
  network
  rioPub
  DESTINATION lib/${PROJECT_NAME})


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
