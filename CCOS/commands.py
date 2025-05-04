from kernel import mainsys


def calc():
    from kernel import mainsys

    print("input a number")
    num1 = input()
    print("input the second number")
    num2 = input()
    print("select +,-,/,*")
    optselcalc = input()
    if optselcalc == "+":
        sumadd = int(num1) + int(num2)
        print("the sum is:")
        print(sumadd)
    if optselcalc == "-":
        summinus = int(num1) - int(num2)
        print("the sum is:")
        print(summinus)
    if optselcalc == "/":
        sumdivide = int(num1) / int(num2)
        print("the sum is:")
        print(sumdivide)
    if optselcalc == "*":
        summnoz = int(num1) * int(num2)
        print("the sum is:")
        print(summnoz)
def asciirender():
    import os
    print("rendering engine of CCOS input PATH//TO//FILE")
    ascinput = input()
    os.system('cls')
    drawing = open(ascinput)
    draw = drawing.read()
    print(draw)
    drawing.close()
    mainsys()




