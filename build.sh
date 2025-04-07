#!/usr/bin/bash

# build script for CCOS uses CMake

cd mpos && cd src && mkdir build && cd build && echo 'building makefiles...' && cmake ..  
