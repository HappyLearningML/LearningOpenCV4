cmake_minimum_required( VERSION 2.8)

project(lesson_03)

set(CMAKE_CXX_STANDARD 11)
set(OPENCV_PATH /home/zhangbinggang/3rdparty/OpenCV3/include)
set(OpenCV_INCLUDE_DIRS ${OPENCV_PATH}/opencv4
                        ${OPENCV_PATH}/opencv4/opencv2)

set(OpenCV_LIBS /home/zhangbinggang/3rdparty/OpenCV3/lib/libopencv_world.so)

message(STATUS "opencv include path:${OpenCV_INCLUDE_DIRS}")

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(lesson_03 lesson_03.cpp)
target_link_libraries(lesson_03 ${OpenCV_LIBS})
