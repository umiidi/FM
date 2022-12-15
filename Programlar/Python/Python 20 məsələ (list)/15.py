arr = list(map(int , input().split()))
temp = [arr[len(arr)-1], arr[len(arr)-2], arr[len(arr)-3]]
for i in range(len(arr)-1, 2 , -1):
    arr[i] = arr[i-3]
else:
    arr[0], arr[1],arr[2] = temp[2], temp[1],  temp[0]
    print(arr)

#Verilmiş massivin elementlərini 3 oyuq sağa sürüşdürən program tərtib edin