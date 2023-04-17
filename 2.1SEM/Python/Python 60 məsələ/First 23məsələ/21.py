import math
x = float(input("x= "))
if x<=0: print("f(x)= 0")
elif x<=1: print("f(x)= " + str(x**2-x))
else: print("f(x)= " + str(x**2 - math.sin(math.pi * (x**2))))

#f(x) funksiyası verilib.
#x<=0 -> f(x)=0
#0<x<=1 -> f(x)=x2-x
#x>1 -> f(x)=x2 - sin(пx2)