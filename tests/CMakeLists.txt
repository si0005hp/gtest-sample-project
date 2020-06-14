# Refer:
# https://cliutils.gitlab.io/modern-cmake/chapters/testing/googletest.html
# https://iscinumpy.gitlab.io/post/gtest-submodule/
# https://techblog.kayac.com/google-test

cmake_minimum_required(VERSION 3.4)
project(main)

add_subdirectory("${CMAKE_SOURCE_DIR}/googletest" "googletest")

macro(package_add_test TESTNAME)
    add_executable(${TESTNAME} ${ARGN})

    target_link_libraries(${TESTNAME} gtest gmock gtest_main lib)
    target_include_directories(${TESTNAME} PUBLIC ..)

    gtest_discover_tests(${TESTNAME}
        WORKING_DIRECTORY ${PROJECT_DIR}
        PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${PROJECT_DIR}"
    )
    set_target_properties(${TESTNAME} PROPERTIES FOLDER tests)
endmacro()

package_add_test(test1 test1.cpp)
