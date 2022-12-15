arr = list(map(int, input().split()))
a = int(input())
sum=0
for i in arr:
	if i>a: sum+=i
else: print(sum)

#Verilmiş massivin verilmiş a ədədindən böyük olan elementlərin cəmini tapan program