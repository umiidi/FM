arr = list(map(int, input().split()))
max = arr[0]
for i in arr:
    if i>max: max = i
else: print("max: " + str(max))

#Verilmiş massivdə maksimum elementi tapan program