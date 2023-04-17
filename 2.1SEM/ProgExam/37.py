a = int(input("a= "))
b = int(input("b= "))
if a<b: a,b = b,a
while a%b:
    a, b = b, a%b
else: print(b)

#2ci üsul:
import math
a = int(input("a= "))
b = int(input("b= "))
print(math.gcd(a,b))

#Verilmiş iki ədədin ƏBOB-nu hesablayan proqram tərtib edin
