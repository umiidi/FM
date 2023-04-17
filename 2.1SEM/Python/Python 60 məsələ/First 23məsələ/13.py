import math
print("Enter the sides of the triangle")
X = float(input("X= "))
Y = float(input("Y= "))
Z = float(input("Z= "))
if X+Y>Z and Y+Z>X and Z+X>Y:
    if X*X + Y*Y == Z*Z or Y*Y + Z*Z == X*X or Z*Z + X*X == Y*Y:
        print("It is a right triangle")
    else: print("It is possible to build a triangle")
else: print("A triangle cannot be build")

#Tərəfləri X,Y,Z olan üçbucaq qurmaq mümkündürmü?. Əgər mümkündürsə bu düzbucaqlı üçbucaqdırmı?
