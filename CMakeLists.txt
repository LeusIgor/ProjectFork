cmake_minimum_required(VERSION 3.27)
project(Project_Fork)

set(CMAKE_CXX_STANDARD 17)

add_executable(Project_Fork main.cpp
        Cellphone.cpp
        Cellphone.h
        Camera.cpp
        Camera.h
        Smartphone.cpp
        Smartphone.h)
