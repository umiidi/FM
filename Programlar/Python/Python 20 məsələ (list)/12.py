arr = list(map(int, input().split()))
sum=0
for i in range(1,len(arr),2):
    if arr[i]%2==0: sum+=arr[i]
else: print('sayi: ' + str(sum))

#Verilmiş massivin cüt yerlərdə duran cüt elementlərinin cəmini hesablayan program