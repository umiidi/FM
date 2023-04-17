arr = list(map(int, input().split()))
for i in range(len(arr)-1):
    for j in range(len(arr)-1-i):
        if arr[j]>arr[j+1]: arr[j], arr[j+1] = arr[j+1], arr[j]
else: print(arr)

#Verilmiş elementi artan ardıcıllıqda sortlayan program