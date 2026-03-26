cmake_minimum_required(VERSION 3.8)
project(mcu_controller)

# [TODO] Implementasikan CMakeList di bawah ini

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_EXECUTABLE_SUFFIX ".exe")
include_directories(include)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/mcu.cpp
    src/mcu_cam_controller.cpp
    src/mcu_walker.cpp
)