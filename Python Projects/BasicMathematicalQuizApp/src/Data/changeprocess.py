from src.Data.utility import UserInfoWriteFile, WriteFile, ReadFile, GetIndex

def ChangeUser(user):
    lines = ReadFile()
    index = GetIndex()
    if lines[index].split("|")[0] == user.name:
        ChangeUserInFile(user, lines, index)
    else: exit("Error, Please report a bug")

def ChangeUserInFile(user, lines, index):
    lines[index] = UserInfoWriteFile(user)
    WriteFile(lines, 'w')