from src.Data.process import StartProcess
from src.Login.login import Login
from src.Registration.registration import Register
from src.Util.inpututil import InputMenu

def StartApp():
    print("Hello, friend")
    StartProcess()
    StartMenu()

def StartMenu():
    print("1. Login\n"
          "2. Register\n"
          "3. Exit")
    n = InputMenu(1,3)
    if n==1: Login()
    elif n==2: Register()
    elif n==3: exit("Goodbye, friend.")
    else: exit("Error, Please report a bug")