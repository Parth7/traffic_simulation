cmake_minimum_required(VERSION 3.17)
project(traffic_simulation)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(traffic_simulation src/main.cpp src/TrafficObject.cpp src/TrafficObject.h src/Vehicle.cpp src/Vehicle.h src/TrafficLight.cpp src/TrafficLight.h src/Street.cpp src/Street.h src/Intersection.cpp src/Intersection.h src/Graphics.cpp src/Graphics.h)

target_link_libraries(traffic_simulation ${OpenCV_LIBS})