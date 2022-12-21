name = input("Name: ")
password = input("Password: ")

with open('5/file.txt', 'a') as f:
    info = str(name) + '|' + str(password) + '\n'
    f.write(info)
print("Successfully written to file")

#Fayla məlumat əlavə etmək