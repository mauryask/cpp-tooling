add_library(${LIBRARY_NAME} STATIC my_lib.cpp)
# Make the current director "./" and generated header file directory "include" as part of your library
target_include_directories(${LIBRARY_NAME} PUBLIC "./" "${CMAKE_BINARY_DIR}/configured_files/include")
