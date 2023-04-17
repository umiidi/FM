arr = list(map(int, input().split()))
a,b = list(map(int, input().split()))
sum=0
for i in arr:
	if i>a and i<b: sum+=i
else: print(sum)

#Verilmiş massivin verilmiş a ədədindən böyük və verilmiş b ədədindən kiçik olan elementlərin cəmini tapan program
