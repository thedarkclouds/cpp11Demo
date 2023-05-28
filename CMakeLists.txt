cmake_minimum_required(VERSION 3.25)
project(cpp11)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(array)
add_subdirectory(string)
add_executable(cpp11 main.cpp )
target_link_libraries(cpp11 arrayStaicLib)
target_link_libraries(cpp11 stringStaicLib)