n= int(input())
sum=n%10
while n//10:
    n//=10
else: print(sum+n)

#2ci üsul:
n = input()
print(int(n[0]) + int(n[len(n)-1]))

#Verilmiş natural ədədin birinci və axırıncı rəqəmlərinin cəmini hesablayan proqram