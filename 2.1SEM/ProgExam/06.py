n = int(input())
count=0
while n:
    if n%10==0: count+=1
    n//=10
else: print(count)

#2-ci üsul
print(input().count('0'))

#Verilmiş ədədin  yazılışında istifadə olunan sıfır rəqəmlərinin sayını hesablayan proqram