cmake_minimum_required(VERSION 4.0)
project(WebsiteLinkSaver)

set(CMAKE_CXX_STANDARD 26)

add_executable(WebsiteLinkSaver main.cpp
        CommandRunner.cpp
        CommandRunner.h
        Print.cpp
        Print.h)
