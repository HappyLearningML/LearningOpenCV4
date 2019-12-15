cmake_minimum_required(VERSION 3.5)
project(less0n_07)
###################################
set(CMAKE_CXX_STANDARD 11)
###################################
if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE release CACHE STRING "choose the type of build" FORCE)
endif()
###################################
set(OPENCV_PATH /home/zhangbinggang/3rdparty/OpenCV3/include)
set(OpenCV_INCLUDE_DIRS ${OPENCV_PATH}/opencv4
			${OPENCV_PATH}/opencv4/opencv2)
set(OpenCV_LIBS /home/zhangbinggang/3rdparty/OpenCV3/lib/libopencv_world.so)
message(STATUS "OpenCV include path:${OpenCV_INCLUDE_DIRS}")
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(lesson_07 lesson_07.cpp)
target_link_libraries(lesson_07 ${OpenCV_LIBS})
