cmake_minimum_required(VERSION 3.19.2)
project(cpp-conan-sample)

add_definitions("-std=c++11")

include(${CMAKE_BINARY_DIR}/build/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(cpp-conan-sample main.cpp ${CONAN_LIBS})
