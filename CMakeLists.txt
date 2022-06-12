cmake_minimum_required(VERSION 3.19)

project(example LANGUAGES CXX)

find_package(crashpad CONFIG REQUIRED)

add_executable(example)

target_sources(example PRIVATE ${CMAKE_SOURCE_DIR}/src/main.cpp)

target_include_directories(example PRIVATE ${CMAKE_SOURCE_DIR}/src)

target_link_libraries(example PRIVATE crashpad::crashpad)
