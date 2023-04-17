arr = list(map(int, input().split()))
b = int(input())
sum=0
for i in range(0,len(arr),2):
    if arr[i]%b==0: sum+=arr[i]
else: print('cemi: ' + str(sum))

#Verilmiş massivin tək yerlərdə duran və verilmiş b ədədinə bölünən elementlərinin cəmini hesablayan program