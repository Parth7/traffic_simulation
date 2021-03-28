# traffic_simulation

#####
For MacOS: 
brew install opencv
#######
In cmake file : 

cmake_minimum_required(VERSION 3.17)
project(traffic_simulation)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(traffic_simulation src/main.cpp)

target_link_libraries(traffic_simulation ${OpenCV_LIBS})
########

For more info: https://stackoverflow.com/questions/39902004/macos-clion-cmake-opencv-simple-usage-to-display-image-from-file

1. Make a build directory in the top level directory: mkdir build && cd build. (optional but recommended)
2. Compile: cmake .. && make (if step1 not followed then just do cmake && make)
3. Run it: ./traffic_simulation
