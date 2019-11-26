cmake_minimum_required( VERSION 2.8)
project(lesson_01)

set(CMAKE_CXX_FLAGS "-std=c++11")
set(OpenCV_DIR /home/zhangbinggang/3rdparty/opencv/Build)
find_package( OpenCV REQUIRED)

message(STATUS "version:${OpenCV_VERSION}")
message(STATUS "include path:${OpenCV_INCLUDE_DIRS}")
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(lesson_01 lesson_01.cpp)
target_link_libraries( lesson_01 ${OpenCV_LIBS} )
