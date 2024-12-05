cmake_minimum_required( VERSION 3.10)
project( Rover_cam_dev )

find_package( OpenCV REQUIRED )

include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable( Rover_cam_dev src/main.cpp )

target_link_libraries( Rover_cam_dev ${OpenCV_LIBS} )
