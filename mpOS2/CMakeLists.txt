project(mpOS2 VERSION 0.2 LANGUAGES C)
cmake_minimum_required(VERSION 3.09)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(mpos2 kernel.c main.c boot.c)
add_compile_options(-Wall)
