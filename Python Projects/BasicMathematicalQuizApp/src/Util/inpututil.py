import sys


def InputName():
    for i in range(4):
        if i==0:
            name = input("Enter name= ")
            if InputTxtTest(name): return name
        elif i!=3:
            name = input("Incorrect, Please re-enter= ")
            if InputTxtTest(name): return name
        else:
            name = input("Final warning!, re-enter= ")
            if InputTxtTest(name): return name
    else: sys.exit("You have checked too many times")

def InputPassword():
    for i in range(4):
        if i==0:
            password = input("Enter password= ")
            if InputTxtTest(password): return password
        elif i!=3:
            password = input("Incorrect, Please re-enter= ")
            if InputTxtTest(password): return password
        else:
            password = input("Final warning!, re-enter= ")
            if InputTxtTest(password): return password
    else: sys.exit("You have checked too many times")

def InputTxtTest(txt):
    return len(txt)>=4 and txt.isalnum()

def NumberRangeTest(n,a,b):
    return n.strip().isnumeric() and (int(n.strip()) in range(a,b+1))

def InputMenu(a,b):
    for i in range(4):
        if i == 0:
            n = input("Please, select menu: ")
            if NumberRangeTest(n,a,b): return int(n.strip())

        elif i != 3:
            n = input("Incorrect, Please re-enter: ")
            if NumberRangeTest(n,a,b): return int(n.strip())
        else:
            n = input("Final warning!, re-enter: ")
            if NumberRangeTest(n,a,b): return int(n.strip())
    else: sys.exit("You have checked too many times")


