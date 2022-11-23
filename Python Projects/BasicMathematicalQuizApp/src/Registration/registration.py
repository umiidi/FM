from time import sleep

from Tools.scripts.cleanfuture import errprint
from src.Data.testprocess import SearchWithName
from src.Data.user import User
from src.Login.login import Login
from src.Util.inpututil import InputPassword, InputName, InputMenu

def Register():
    print("\nRegistration Form")
    name = InputName()
    while SearchWithName(name):
        errprint("Name is already used, Please check another name")
        sleep(0.5)
        name = InputName()
    else: AfterMenuRegistration(name)

def AfterMenuRegistration(name):
    password = InputPassword()
    User(name, password)
    AfterRegistration()

def AfterRegistration():
    print("\nDo you want to login?")
    print("1. Yes\n2. Register Again")
    n = InputMenu(1, 2)
    if n == 1:
        Login()
    elif n == 2:
        Register()
    else: exit("Error, Please report a bug")
