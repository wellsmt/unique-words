cmake_minimum_required(VERSION 2.4)

project(unique-words)
enable_testing()
find_package(GTest REQUIRED)
find_package(Boost REQUIRED)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS}) 
    add_executable(unique-words main.cpp)
    target_link_libraries(unique-words ${Boost_LIBRARIES})
    target_compile_features(unique-words PRIVATE cxx_std_14)
endif()