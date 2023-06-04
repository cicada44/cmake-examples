add_library(
    sqrt
    Math.cpp
    Math.hpp
)

compgg

target_include_directories(
    sqrt
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

