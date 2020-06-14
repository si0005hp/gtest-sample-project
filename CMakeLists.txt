cmake_minimum_required(VERSION 3.4)
project(main)

message("Hi")

add_library(lib lib.cpp)

add_executable(main main.cpp)
target_link_libraries(main lib)

option(PACKAGE_TESTS "Build the tests" ON)
if(PACKAGE_TESTS)
    enable_testing()
    include(GoogleTest)
    add_subdirectory(tests)
endif()
