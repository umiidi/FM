filename = "src/Data/User.txt"
Users = []
index = -1

def GetIndex():
    global index
    return int(index)

def SetIndex(newindex):
    global index
    index = newindex

def GetFileName():
    global filename
    return filename

def ReadFile():
    try:
        with open(filename, 'r') as f:
            return f.readlines()
    except:
        exit("No Read File")

def WriteFile(lines, parametr = 'a'):
    global filename
    with open(filename, parametr) as f:
        f.writelines(lines)

def UserInfoWriteFile(user):
    return user.name + "|" + user.password + "|" + str(user.level) + "|" + str(user.score) + "\n"