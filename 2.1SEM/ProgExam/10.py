n = int(input())
sum = 0
while n:
    sum+=(n%10)**2
    n//=10
else: print(sum)

#Verilmiş ədədin rəqəmlərinin kvadratları cəmini hesablayan proqramı 