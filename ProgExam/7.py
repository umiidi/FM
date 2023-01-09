n = int(input())
count=0
while n:
    if n%10==7: count+=1
    n//=10
else: print(count)

#2-ci üsul
print(input().count('7'))

#Verilmiş ədədin yazılışında istifadə olunan yeddi rəqəmlərinin sayını hesablayan proqram