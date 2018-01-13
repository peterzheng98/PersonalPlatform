cmake_minimum_required(VERSION 3.9)
project(CppModule)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppModule main.cpp SocketConn.cpp SocketConn.h Include.h RuntimeException.cpp RuntimeException.h)