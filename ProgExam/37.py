a = int(input("a= "))
b = int(input("b= "))
if a<b: a,b = b,a
while a%b:
    a, b = b, a%b
else: print(b)

#Verilmiş iki ədədin ƏBOB-nu hesablayan proqram tərtib edin