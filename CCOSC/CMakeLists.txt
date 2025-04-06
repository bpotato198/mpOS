cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED False)

add_executable(ccosc calls.h boot.c kernel.c main.c tartac.c)