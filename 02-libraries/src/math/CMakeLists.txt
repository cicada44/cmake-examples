set(target_name app)

add_executable(${target_name})

add_compile_options(
    ${target_name}
    -Wall -Wextra -Werror -pedantic
)

target_sources(
    ${target_name}
    PRIVATE
        main.cpp
)

# Link libraries
target_link_libraries(
    ${target_name}
    PRIVATE
        sqrt
        pow
)

target_include_directories(
    ${target_name}
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/src
)
