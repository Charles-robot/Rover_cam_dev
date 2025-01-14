cmake_minimum_required( VERSION 3.10)
project( Rover_cam_dev )

find_package( OpenCV REQUIRED )

include_directories( ${OpenCV_INCLUDE_DIRS} )
include_directories(${CMAKE_SOURCE_DIR}/include)

set(SOURCES

    src/main.cpp
    src/ScreenshotIPCam.cpp
    src/AfficherImage.cpp
)

add_executable( Rover_cam_dev ${SOURCES})


target_link_libraries( Rover_cam_dev ${OpenCV_LIBS} )
