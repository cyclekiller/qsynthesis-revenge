cmake_minimum_required(VERSION 3.17)

project(prebuild_task)

set(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_SOURCE_DIR}/libs" CACHE STRING "The path to use for make install" FORCE)

file(MAKE_DIRECTORY ${CMAKE_INSTALL_PREFIX})

add_subdirectory(src)