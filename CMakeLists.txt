cmake_minimum_required (VERSION 3.2)
project (seqan3_infrastructure_tutorial CXX)

add_executable(hello hello.cpp)
add_executable(factorial factorial.cpp)

enable_testing()
add_executable(factorial_test factorial_test.cpp)
add_test(factorial factorial_test)
