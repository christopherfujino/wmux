cmake_minimum_required(VERSION 3.24)

project(wmux LANGUAGES CXX)

# For clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# TO build from vim, :make -C build/ wmux
add_executable(wmux src/main.cpp include/wmux.hpp)

set_property(TARGET wmux PROPERTY CXX_STANDARD 23)

# Cause build failure if compiler does not support C++23
set(CMAKE_CXX_STANDARD_REQUIRED ON)
