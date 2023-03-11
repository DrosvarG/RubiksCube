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

add_library (hello STATIC "src/HelloWorld.cpp")
target_include_directories (hello PUBLIC "src")

add_executable (HelloWorld "src/main.cpp")
target_link_libraries (HelloWorld PRIVATE hello)

add_executable (runtests "tests/HelloWorld.cpp")
target_link_libraries (runtests PRIVATE Catch2::Catch2WithMain hello)
