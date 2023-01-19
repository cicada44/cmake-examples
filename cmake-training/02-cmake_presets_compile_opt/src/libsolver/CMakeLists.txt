set(target_name solver)

add_library(
    ${target_name}
    libsolver/solver.cpp
    libsolver/solver.hpp
)

include(CompileOptions)
set_compile_options(${target_name})

target_link_directories(
    ${target_name}
    PUBLIC
       ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries(
    ${target_name}
    PRIVATE
        m
)