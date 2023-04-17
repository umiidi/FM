n = int(input("eded: "))
result=0
count=1
while n>=1:
    if not n%2 == 0:
        result+=n%10*count
        count*=10
    n=n//10
else: print(result)

#dordreqemli ededin cut reqemlerini atir, yerde qalanlari chap edir
