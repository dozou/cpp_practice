cmake_minimum_required(VERSION 3.6)
project(Practice)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(Pointer)
add_subdirectory(Class_1)
add_subdirectory(Overload)
add_subdirectory(Template)
add_subdirectory(STL)


add_executable(practice_1 Practice_1/main.cxx)
add_executable(practice_2 Practice_2/main.cxx)
