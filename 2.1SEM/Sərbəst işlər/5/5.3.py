name = input("Name: ")
with open('5/file.txt', 'r') as f:
    lines = f.readlines()
index = -1
for i in range(len(lines)):
    if lines[i] != "\n":
        if lines[i].split('|')[0] == name:
            index = i
            break
if index == -1: print("No such user found")
else:
    password = input("New pasword: ")
    lines[index] = str(name) + '|' + str(password) + '\n'
    with open('5/file.txt', 'w') as f:
        f.writelines(lines)
    print("Your information has been successfully changed")

#Fayldakı məlumatı dəyişmək (parolu)