cmake_minimum_required(VERSION 3.20)
project(mathlib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(mathlib STATIC src/mathlib.cpp)
target_include_directories(mathlib PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)
add_library(mathlib::mathlib ALIAS mathlib)

if(PROJECT_IS_TOP_LEVEL)
    enable_testing()
    add_subdirectory(tests)
endif()
