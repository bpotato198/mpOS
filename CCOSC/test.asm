.global boot
.global init
.global userlandinit


# soon to be implemented a init system
# currently the entire project is unbuildable
# due to not properly configured makefiles and CMakeLists
# new builds and sources will have new and rewritten makefiles and CMakeLists
# boot is for booting the system itself
# init is a POST-Like system for checking if everything is alright and no files are missing
# userlandinit starts the shell itself