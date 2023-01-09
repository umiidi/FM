n = int(input())
maxnumber = n%10
n//=10
while n:
    if maxnumber<n%10: maxnumber = n%10
    n//=10
else: print(maxnumber)

#2-ci üsul:
print(max(input()))

#Verilmiş ədədin maksimal rəqəmini hesablayan proqram