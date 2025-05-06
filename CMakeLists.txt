cmake_minimum_required(VERSION 3.25)
project(cpp11)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(array)
add_subdirectory(string)
add_subdirectory(typedef)
add_subdirectory(point)
add_subdirectory(pojo)
add_subdirectory(struct_test)
add_subdirectory(virtual)

add_subdirectory(hy_string)


add_executable(cpp11 main.cpp)
target_link_libraries(cpp11 arrayStaicLib)
target_link_libraries(cpp11 stringStaicLib)
target_link_libraries(cpp11 typedefStaicLib)
target_link_libraries(cpp11 pointStaicLib)
target_link_libraries(cpp11 pojoStaicLib)
target_link_libraries(cpp11 structStaicLib)
target_link_libraries(cpp11 virtualStaicLib)
target_link_libraries(cpp11 hy_stringStaicLib)









