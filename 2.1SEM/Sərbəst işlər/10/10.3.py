class Person:
    def __init__(self, name, surname, age):
        self.__name = name
        self.__surname = surname
        self.__age = age
    def GetName(self):
        return self.__name
    
    def GetSurname(self):
        return self.__surname
    
    def GetAge(self):
        return self.__age
    

p1 = Person("Michael", 'Jackson',50)
print(p1.GetName())

#Classın enkapsulyasiya olunması
