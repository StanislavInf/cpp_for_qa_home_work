cmake_minimum_required(VERSION 3.27)
project(cpp_for_qa_home_work)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_for_qa_home_work
        main.cpp src/square.cpp
        src/signal_processing/strategy_engine.cpp)

# Google Test
include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)
message(STATUS "GTest source dir: ${googletest_SOURCE_DIR}")
message(STATUS "GTest binary dir: ${googletest_BINARY_DIR}")

# Tests
enable_testing()
add_executable(tests
        tests/test_square.cpp src/square.cpp
        tests/signal_processing/test_strategy_engine.cpp src/signal_processing/strategy_engine.cpp)
target_link_libraries(tests gtest_main)
include(GoogleTest)
gtest_discover_tests(tests)

# Google Benchmark
FetchContent_Declare(
        googlebenchmark
        GIT_REPOSITORY https://github.com/google/benchmark.git
        GIT_TAG v1.7.1
)
FetchContent_MakeAvailable(googlebenchmark)

# Benchmarks
add_executable(benchmarks
        benchmarks/signal_processing/benchmark_strategy_engine.cpp
        src/signal_processing/strategy_engine.cpp
)
target_link_libraries(benchmarks benchmark::benchmark)

# Doxygen
find_package(Doxygen)
if(DOXYGEN_FOUND)
    set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in)
    set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)
    file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/docs)
    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)
    add_custom_target(doc_doxygen ALL
            COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
            COMMENT "Generating API documentation with Doxygen"
            VERBATIM
    )
else()
    message("Doxygen needs to be installed to generate the documentation.")
endif()