arr = list(map(int,input().split()))
B = int(input())
C = int(input())
i=0
while i<len(arr):
    if arr[i]>=B and arr[i]<=C:
        arr.pop(i)
        i-=1
    i+=1
else: print(arr)

#Verilmiş massivdən [B,C] aralığında olan ədədləri çıxardın