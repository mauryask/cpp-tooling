cmake_minimum_required(VERSION 3.28.0)
project(BasicProject01 VERSION 1.0.0 LANGUAGES C CXX)
add_library(Library STATIC my_lib.cpp)
add_executable(BasicProject01 main.cpp)
# Lining the library to the executable file
target_link_libraries(BasicProject01 PUBLIC Library)