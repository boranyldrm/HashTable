cmake_minimum_required(VERSION 3.6)
project(Hash)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp PeopleAVLTree.h PeopleDatabase.cpp PeopleDatabase.h PeopleAVLTree.cpp)
add_executable(Hash ${SOURCE_FILES})