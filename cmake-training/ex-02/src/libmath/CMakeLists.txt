add_library(
    sqrt
    Math.cpp
    Math.hpp
)

target_include_directories(
    sqrt
    PUBLIC
    ${CMAKE_SOURCE_DIR}/src
)

