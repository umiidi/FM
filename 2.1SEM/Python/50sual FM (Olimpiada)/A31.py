n = int(input("eded: "))
temp = n
while temp>=1:
    if( n % (temp%10) !=0 ):
        print("no")
        break
    temp=temp//10
else: print("yes")

#4reqemleri ededin oz reqemlerine bolunub bolunmediyini tapin
