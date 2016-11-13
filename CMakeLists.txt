cmake_minimum_required(VERSION 3.0)

project(ObjectIO CXX)

set(CMAKE_CXX_STANDARD 14)

option(USE_STD_FUNCTION OFF)

if (USE_STD_FUNCTION)
    add_definitions(-DUSE_STD_FUNCTION)
endif()

set(ObjectIO_Headers
    "include/circle.h"
    "include/io_circle.h"
    "include/io_obj.h"
    "include/shape.h"
    "include/triangle.h")

set(ObjectIO_Sources
    "src/circle.cpp"
    "src/io_circle.cpp"
    "src/io_obj.cpp"
    "src/main.cpp"
    "src/triangle.cpp")

add_executable(ObjectIO ${ObjectIO_Sources})
target_include_directories(ObjectIO PRIVATE "include")
add_custom_target(_headers SOURCES ${ObjectIO_Headers})

