count=0; sum=0
n = int(input())
while n>=0:
    if n%2==0: sum+=n*n
    else: sum+=-n
    count+=1
    n = int(input())
else: 
    print("cem: " + str(sum))
    print("toplananlarin sayi: " + str(count))

#Ardıcıl olaraq müsbət ədədlər daxil edilir. Onların cəmini tapan program.
#Tək ədəd olarsa mənfisi ilə cəmlənir, Cüt ədəd olarsa kvadratı ilə. Mənfi ədəd daxil edildikdə program sonlanır.