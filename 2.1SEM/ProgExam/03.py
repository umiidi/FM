n = int(input())
minnumber = n%10
n//=10
while n:
    if minnumber>n%10: minnumber = n%10
    n//=10
else: print(minnumber)

#2-ci üsul:
print(min(input()))

#Verilmiş ədədin minimal rəqəmini hesablayan proqram