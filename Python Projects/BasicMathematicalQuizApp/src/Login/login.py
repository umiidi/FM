from time import sleep

from Tools.scripts.cleanfuture import errprint

from src.Data.testprocess import LoginTest


def Login():
    print("\nLogin Form")
    LoginInput(0)

def LoginInput(i):
    name = input("Name: ")
    password = input("Password: ")
    test = LoginTest(name, password)
    if test == False:
        if i in [0,1]: errprint("Name or password is incorrect, please login again")
        elif i == 2: errprint("Final warning!. Please login again")
        else: exit("You have checked too many times")
        sleep(0.5)
        LoginInput(i+1)