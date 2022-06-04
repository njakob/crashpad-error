cmake_minimum_required(VERSION 3.19)

project(crashpad_error LANGUAGES CXX)

find_package(crashpad CONFIG REQUIRED)

add_executable(crashpad_error)

target_sources(crashpad_error PRIVATE ${CMAKE_SOURCE_DIR}/src/main.cpp)

target_include_directories(crashpad_error PRIVATE ${CMAKE_SOURCE_DIR}/src)

target_link_libraries(crashpad_error PRIVATE crashpad::crashpad)
