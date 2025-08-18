cmake_minimum_required(VERSION 3.28.3)
project(BasicProject03 VERSION 1.0.0 LANGUAGES C CXX)

#Some other important veriables 

# Tell CMake to use C++17 features
set(CMAKE_CXX_STANDARD 17)
# Force the CMake to strictively adhere to C++17 standard (If compikler does not support c++17 then the configuration will fail)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# This makes sures that only standard C++ code is used ensures portability
set(CMAKE_CXX_EXTENSIONS OFF)


# User defined CMake variables
set(EXECUTABLE_NAME Executable)
set(LIBRARY_NAME Library)


# If you do not want to set this option ON and OFF in the CMake file
# Can be set ON/OFF from commnd line while build generation (use below command)
# cmake -S . -B ./build -D COMPILE_EXECUTABLE=ON
option(COMPILE_EXECUTABLE "Whether to compile the executable" OFF) 

add_subdirectory(src)
add_subdirectory(inc)
# Conditional inclusion of app directory (The executable will not be created if set OFF)
if(COMPILE_EXECUTABLE)
   add_subdirectory(app)
else() 
   message("Without exe. compiling")   
endif()   