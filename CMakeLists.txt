cmake_minimum_required(VERSION 3.15)
project(tutoraggio)

set(CMAKE_CXX_STANDARD 17)
set(cmake_cxx_flags "${cmake_cxx_flags} -std=c++11 -w -wall -wextra -pedantic")
add_executable(tutoraggio main.cpp 17_marzo.cpp 24_marzo.cpp 31_marzo.cpp 7_aprile.cpp 31_aprile.cpp 8_maggio.cpp)