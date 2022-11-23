from src.Data.utility import Users, SetIndex, GetIndex
from src.Home.home import Home

def LoginTest(name, password):
    if not SearchWithName(name): return False
    else:
        index = GetIndex()
        if Users[index].name == name.lower() and Users[index].password == password:
            Home(Users[index])
        else:
            return False

def SearchWithName(name):
    if len(name)<4 and (not name.isalnum()): return False
    for i in range(len(Users)):
        if name.lower() == Users[i].name:
            SetIndex(i)
            return True
    else: return False