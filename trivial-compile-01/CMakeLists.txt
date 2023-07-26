
# Firsty - set version
cmake_minimum_required(VERSION 3.22)

# Fill project properties
project(
    HelloCmake
    VERSION 1.0
    LANGUAGES CXX
)

# Set compilation source
add_executable(
    HelloCmake
    main.cpp
)
