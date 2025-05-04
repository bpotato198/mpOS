# CCOS by bpotato
# not a real operating system, only targeted towards learning, tinkering and many more
import time



apps = "test", "mkdir", "help", "calc"

# Kernel start
def mainsys():
    from filesystem import filelists
    from commands import calc
    from filesystem import filecreation
    from commands import asciirender
    from tartac import pkg
    version = "0.1 vvama"

    shell = input("<ASH>>  ")
    if shell == "test":
        print("test")
        mainsys()
    if shell == "mkdir":
        filecreation()
        mainsys()
    if shell == "calc":
        calc()

    if shell == "help":
        print("CCOS is a terminal based operating system written in Python, its very small and configurable it runs on the ")
        print("hosts terminal without virtualization")
        print("to exit from the CCOS press CTRL + C")
        print("for lists of apps type apps")
        print("CCOS ver 0.1 codename vvama")
        mainsys()
    if shell == "apps":
        print(apps)
        mainsys()

    if shell == "kernmsg":
        print("kernel active all systems active")
        mainsys()
    if shell == "exit":
        print("exiting...")
        time.sleep(1)
    if shell == "ash":
        print("Ash, the CCOS shell")
        print("ver 0.1")
        mainsys()
    if shell == "krnpan":
        print("Kernel panic!!")
        print("reboot system to fix")
    if shell == "sysinfo":
        print("CCOS version: ", version)
    if shell == "tartac":
        pkg()

    else:
        mainsys()
    if shell == "ls":
        filelists()
    if shell == "ascii":

        asciirender()







# Kernel end