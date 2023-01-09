from math import sqrt
n = int(input())
for i in range(2, int(sqrt(n)+1)):
    if n%i==0:
        print("no")
        break
else: 
    if n==0 or n==1: print("no")
    else: print("yes")

#Verilmiş ədədin sadə olub-olmadığını yoxlayan proqram