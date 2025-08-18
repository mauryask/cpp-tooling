cmake_minimum_required(VERSION 3.28.3)
project(BasicProject03 VERSION 1.0.0 LANGUAGES C CXX)

set(EXECUTABLE_NAME Executable)
set(LIBRARY_NAME Library)

add_subdirectory(src)
add_subdirectory(inc)
add_subdirectory(app)