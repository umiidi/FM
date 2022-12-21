name = input("Name: ")

with open('5/file.txt', 'r') as f:
    lines = f.readlines()

for line in lines:
        if line != "\n":
            if line.split('|')[0] == name:
                password = input("Password: ")
                testpassword = line.split("|")[1]
                if password == testpassword.strip():
                    print("Successful")
                    break
                else: 
                    print("Password is incorrect")
                    break
else: print("No such user found")

#Fayldan məlumat oxumaq (ad, and şifrə)