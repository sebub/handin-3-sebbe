cmake_minimum_required(VERSION 3.1)

project(Handin3 C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(src)

#enabling testing and adding folder for test files
enable_testing()
add_subdirectory(test)