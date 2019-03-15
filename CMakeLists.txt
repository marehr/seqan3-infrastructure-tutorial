cmake_minimum_required (VERSION 3.2)
project (seqan3_infrastructure_tutorial CXX)

add_executable(hello hello.cpp)
add_executable(factorial factorial.cpp)

add_subdirectory (googletest)

enable_testing()

add_executable(factorial_test factorial_test.cpp)
target_link_libraries(factorial_test gtest_main)
add_test(factorial factorial_test)
