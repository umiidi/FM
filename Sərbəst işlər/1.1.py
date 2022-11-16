n = input("Adı daxil edin: ")
for i in n:
    if i.isnumeric():
        print("Düzgün ədəd daxil etmədiniz!")
        break
else: print("Uğurlu")

#sətir daxil edilir, əgər sətrdə rəqəm varsa xəta baş verir.