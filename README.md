# mpOS
*the home repository of the fake OS written in C , made to simulate a real operating system*
*curenttly in development, most things like the bootloader or kernel are done, but apps are still in development*


*there are two files, one `makefile` for Linux/BSD/MacOS and one `CMakeLists.txt` for windows*

*requires: GCC or Clang*
*CMake (if on windows), Make (if on Unix)

***The `ccosc/` and `mpOS/` dirs are legacy code, use `mpOS2/` dir***

# building
*from source*
1. git clone the repo
2. make sure you have GCC and Make (if you want to use Clang, make sure to edit the makefile)
3. run `make` **currently, make isnt working properly, probably due to incorrect makefile**
4. then it will compile into a bunch of .o files and a executable
5. run `make clean` to delete any .o files and leave only the executable
6. run via `./mpos`


*_its pure C!_*
