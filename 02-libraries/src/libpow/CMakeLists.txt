set(target_name pow)

# Make library
add_library(
    ${target_name} STATIC
    libpow/pow.cpp
    libpow/pow.hpp
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
