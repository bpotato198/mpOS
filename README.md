# mpOS
*the home repository of the fake OS written in C and C++, made to simulate a real operating system*
*curenttly in development, most things like the bootloader or kernel are done, but apps are still in development*



*requires: GCC or Clang and Make and CMake if building mpOS2*

***The `ccosc/` dir is legacy, `mpOS/` is the first version, and `mpOS2/` is the current version
# building
*from source*
*mpOS*
1. `git clone` this repository
2. run `cd mpOS`
3. then `make` *make sure to edit the makefile if on Clang*
4. then run ./mpOS

*mpOS2*
1. `git clone` this repository
2. run `cd mpOS2`
3. then `mkdir build`
4. then `cd build`
5. then `cmake ..`
6. and `cmake .`
7. then `cmake ..`
8. and after that `cmake --build .`
9. run `./mpOS2`

*_its pure C and C++!_*
