cmake_minimum_required(VERSION 3.22)

project(
    "math"
    VERSION 1.0
    LANGUAGES CXX
)

# Set bin to binaries handling directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add src directory as submodule
add_subdirectory(src)
