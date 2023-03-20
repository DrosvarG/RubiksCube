cmake_minimum_required (VERSION 3.22)
project ("HelloWorld" LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -pedantic)
endif()

find_package(Catch2 CONFIG REQUIRED)
find_package(SDL2 CONFIG REQUIRED)

add_executable (RubiksCube "src/main.cpp")
target_link_libraries (RubiksCube PRIVATE SDL2::SDL2)
