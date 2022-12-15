arr = list(map(int , input().split()))
arr2=[0]
for i in range(1,len(arr)-1):
    arr2.append((arr[i-1] + arr[i+1])/2)
else:
    arr2[0] = arr[0]
    arr2.append(arr[len(arr)-1])
    print(arr2)

#Verilmiş massivin elementini sağ və sol qonşuların cəminin yarısı ilə əvəz edən program