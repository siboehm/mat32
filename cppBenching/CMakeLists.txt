cmake_minimum_required(VERSION 3.19)
project(cpp_bench)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_FLAGS_RELEASE "-O3 -ffast-math -march=native -mtune=native -funsafe-math-optimizations")

set(CMAKE_CXX_STANDARD 17)

add_executable(exp_bench exp_bench.cpp)

find_package(benchmark REQUIRED)

target_link_libraries(exp_bench benchmark::benchmark)