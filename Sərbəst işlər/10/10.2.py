class Person:
    def __init__(self, name, surname, age):
        self.name = name
        self.surname = surname
        self.age = age
    def __str__(self):
        return str('Name: ' + self.name + '\nSurname: ' + self.surname + '\nAge: ' + str(self.age))
    
p1 = Person("Michael", 'Jackson',50)
print(p1)

#Obyektin bütün məlumatlarını çap edən program