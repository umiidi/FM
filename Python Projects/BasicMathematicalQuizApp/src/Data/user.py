from src.Data.addprocess import AddUser
from src.Data.changeprocess import ChangeUser

class User:

    def __init__(self, name= None, password= None, level=1, score=0):
        self.name = name
        self.password = password
        self.level = level
        self.score = score
        if self.name != None:
            print("Registration Successfully")
            AddUser(self)

    def GetLevel(self):
        return self.level

    def AddLevel(self):
        self.level +=1
        ChangeUser(self)

    def GetScore(self):
        return self.score

    def  AddScore(self, newscore):
        self.score += newscore
        ChangeUser(self)
