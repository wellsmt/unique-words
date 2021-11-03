cmake_minimum_required(VERSION 2.4)

project(unique-words)
enable_testing()
find_package(GTest REQUIRED)

add_executable(unique-words main.cpp)