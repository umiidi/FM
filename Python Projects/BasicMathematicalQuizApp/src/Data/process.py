from src.Data.user import User
from src.Data.utility import Users, ReadFile


def StartProcess():
    AllUserExportInFile()

def AllUserExportInFile():
    lines = ReadFile()
    for line in lines:
        Users.append(ExportInfoInLines(line))

def ExportInfoInLines(line):
    info = line.split("|")
    user = User()
    user.name = info[0]
    user.password = info[1]
    user.level = int(info[2])
    user.score = int(info[3])
    return user