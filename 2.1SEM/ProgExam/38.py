a = int(input("a= "))
b = int(input("b= "))
temp = a*b
if a<b: a,b = b,a
while a%b:
    a, b = b, a%b
else: print(temp//b)

#Verilmiş iki ədədin ƏKOB-nu hesablayan proqram tərtib edin