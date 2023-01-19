set(target_name solver)

add_library(${target_name} STATIC
  libsolver/solver.cpp
  libsolver/solver.hpp)

include(CompileOptions)
set_compile_options(${target_name})

target_include_directories(
  ${target_name}
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)