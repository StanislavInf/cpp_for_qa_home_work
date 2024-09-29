cmake_minimum_required(VERSION 3.27)
project(cpp_for_qa_home_work)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_for_qa_home_work main.cpp src/square.cpp)


include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)
message(STATUS "GTest source dir: ${googletest_SOURCE_DIR}")
message(STATUS "GTest binary dir: ${googletest_BINARY_DIR}")


enable_testing()
add_executable(tests tests/test_square.cpp src/square.cpp)
target_link_libraries(tests gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)