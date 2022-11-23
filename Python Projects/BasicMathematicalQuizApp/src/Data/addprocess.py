from src.Data.utility import UserInfoWriteFile, Users, GetFileName

def AddUser(user):
    AddUserToArr(user)
    AddUserToFile(user)

def AddUserToFile(user):
    filename = GetFileName()
    try:
        with open(filename, 'a') as f:
            f.write(str(UserInfoWriteFile(user)))
    except: print("salam")

def AddUserToArr(user):
    Users.append(user)