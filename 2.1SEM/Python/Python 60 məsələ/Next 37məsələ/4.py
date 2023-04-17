#Verilmiş n elementli massivdə elementləri sağa sürüşdürən program
arr = list(map(int, input().split()))
temp = arr[len(arr)-1]
for i in range(len(arr)-1,0,-1):
    arr[i] = arr[i-1]
else:
    arr[0] = temp
    print(arr)

