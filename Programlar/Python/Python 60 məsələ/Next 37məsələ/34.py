hasil = 1; sum=0; count=0
p = int(input("P= "))
h = int(input("H= "))
n = int(input())
while n!=p and n!=h:
    if n<h: sum+=n
    elif n>p: hasil*=n
    else: count+=1
    n = int(input())
else:
    print("<H ededlerin cemi: " + str(sum))
    print("P> ededlerin hasili: " + str(hasil))
    print("(P,H) ededlerin sayi: " + str(count))
print("sagol")

#Daxil edilmiş massivin müsbət elementlərinin cəmini təyin edən program
