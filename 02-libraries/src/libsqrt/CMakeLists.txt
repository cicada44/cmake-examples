set(target_name sqrt)

# Make library
add_library(
    ${target_name} SHARED
    libsqrt/sqrt.cpp
    libsqrt/sqrt.hpp
)

add_compile_options(
    ${target_name}
    -Wextra
    -Werror
    -Wall
    -pedantic
)

target_include_directories(
    ${target_name}
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)

