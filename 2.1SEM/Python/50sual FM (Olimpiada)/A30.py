n = int(input("eded: "))
cem=0
while n>0:
    cem+=n%10
    n=n//10
else: 
    if cem%2==0 and cem%3==0: print("yes")
    else: print("no")

#4reqemli ededin reqemleri ceminin 2 veya 3un misilleri oldugunu teyin eden program
