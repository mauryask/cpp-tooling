add_library(Library STATIC my_lib.cpp)
# Specify where to find the header files
target_include_directories(Library PUBLIC "./")