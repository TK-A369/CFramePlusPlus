cmake_minimum_required(VERSION 3.10)

project(CFramePlusPlus)

add_executable(CFramePlusPlus example.cpp)

add_library(CFramePlusPlusLib CFramePlusPlus.cpp)

target_link_libraries(CFramePlusPlus PUBLIC CFramePlusPlusLib)
