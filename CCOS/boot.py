import os
import time
from kernel import mainsys


def bootloader():
    print("==CCBoot active please select a system==")
    print("CCOS")
    bootinput = input()
    if bootinput == "ccos":
        print("booting up....")
        time.sleep(3)
        print("booted!")
        time.sleep(1)
        os.system('cls')
        mainsys()
    if bootinput == "bootdebug":
        mainsys()

    else:
        print("no command!")
        bootloader()


if __name__ == "__main__":
    bootloader()
