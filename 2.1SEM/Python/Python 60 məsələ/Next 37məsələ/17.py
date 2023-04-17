arr = list(map(int, input().split()))
T = int(input("T= "))
positive = 0
for i in arr:
    if i>0: positive+=1
T/=positive
for i in range(len(arr)):
    if arr[i]>0: arr[i]+=T
else: print(arr)

#Verilmiş T ədədini verilmiş massivin müsbət elementləiri arasında bərabər bölün və üzərinə gəlin