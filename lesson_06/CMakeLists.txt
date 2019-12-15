cmake_minimum_required( VERSION 3.5)
project(lesson_06)
################################
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_Cxx_STANDARD_REQUIRED ON)

#if (${CMAKE_CXX_COMPILED_ID} STREQUAL GNU)
#	set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")
#endif()
################################
if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE release CACHE STRING "choose the of build" FORCE)
endif()
################################
set(OPENCV_PATH /home/zhangbinggang/3rdparty/OpenCV3/include)
set(OpenCV_INCLUDE_DIRS ${OPENCV_PATH}/opencv4
						${OPENCV_PATH}/opencv4/opencv2)

set(OpenCV_LIBS /home/zhangbinggang/3rdparty/OpenCV3/lib/libopencv_world.so)

message(STATUS "OpenCV include path:${OpenCV_INCLUDE_DIRS}")
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(lesson_06 lesson_06.cpp tool.cpp)
target_link_libraries(lesson_06 ${OpenCV_LIBS})
