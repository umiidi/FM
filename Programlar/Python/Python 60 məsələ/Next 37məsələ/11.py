arr = list(map(int, input().split()))
for i in range(len(arr)):
    if arr[i]<0: arr[i] = arr[i]**2
else: print(arr)

#Verilmiş massivdə element mənfidirsə onu elementin kvadratı ilə dəyişən program