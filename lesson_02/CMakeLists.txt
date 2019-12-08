cmake_minimum_required( VERSION 2.8)
project(lesson_02)

#find_package( OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 11) #set(CMAKE_CXX_FLAGS "-std=c++11")
set(OPENCV_PATH /home/zhangbinggang/3rdparty/OpenCV3/include) 
set(OpenCV_INCLUDE_DIRS ${OPENCV_PATH}/opencv4
                        ${OPENCV_PATH}/opencv4/opencv2)

set(OpenCV_LIBS /home/zhangbinggang/3rdparty/OpenCV3/lib/libopencv_world.so)

message(STATUS "version:${OpenCV_VERSION}")
message(STATUS "include path:${OpenCV_INCLUDE_DIRS}")

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(lesson_02 lesson_02.cpp)
target_link_libraries( lesson_02 ${OpenCV_LIBS} )

