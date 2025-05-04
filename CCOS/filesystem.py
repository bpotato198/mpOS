import time

def filecreation():
    from kernel import mainsys
    print("creating file...")
    time.sleep(4)
    print("file created!")
    mainsys()

def filelists():
    from kernel import mainsys
    print("no files!")
    mainsys()
