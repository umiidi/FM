#Verilmiş massivdə k-cı elementdən başlayan m elementdən ibarət qrup əlavə edin
arr = list(map(int, input().split()))
k = int(input("k= "))
m = int(input("m= "))
for i in range(m):
    arr.append(arr[k+i-1])
else: print(arr)

