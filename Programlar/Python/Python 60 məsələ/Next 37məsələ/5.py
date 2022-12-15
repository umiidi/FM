#Verilmiş massivdə massivin birinci yarsı ilə ikinci yarsının yerini dəyişin
arr = list(map(int, input().split()))
for i in range(0, len(arr)//2):
    arr[i], arr[i- len(arr)//2] = arr[i- len(arr)//2], arr[i]
else: print(arr)

