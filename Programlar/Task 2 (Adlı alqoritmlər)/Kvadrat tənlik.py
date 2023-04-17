from math import sqrt
a = float(input("a= "))
b = float(input("b= "))
c = float(input("c= "))
if a==0 and b==0 and c==0:
    print("sonsuz sayda koku var")
elif a==0 and b==0:
    print("koku yoxdur")
elif a==0:
    print(-c/b)
else:
    D = b**2-4*a*c
    if D>0:
        x1 = (-b + sqrt(D))/(2*a)
        x2 = (-b - sqrt(D))/(2*a)
        print(x1,x2)
    elif D==0:
        x = (-b + sqrt(D))/(2*a)
        print(x)
    else: print("koku yoxdur")
