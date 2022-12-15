def test(a):
    if a==0 or a==1: return False
    i = 2
    while i*i<=a:
        if a%i==0:
            return False
        i+=1
    else: return True
arr = list(map(int, input().split()))
count=0
sum=0
print('ededler',end= ': ')
for i in arr:
    if test(i):
        count+=1
        sum+=i
        print(i, end=' ')
else: 
    print('\ncemi: ' + str(sum))
    print('sayi: ' + str(count))

#Verilmiş massivdə sadə ədədlərin sayını, özlərini və cəmlərini hesablayan program