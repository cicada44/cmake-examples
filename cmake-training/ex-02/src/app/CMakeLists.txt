add_executable(
    app
    main.cpp
)

target_link_libraries(
    app
    PUBLIC
        sqrt
)

target_include_directories(
    app
    PUBLIC
    ${CMAKE_SOURCE_DIR}/libmath
)