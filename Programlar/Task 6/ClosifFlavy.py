n = int(input())
arr = [i for i in range(1,n+1)]
while len(arr) != 1:
    i = 0
    count = 1
    while count != n:
        if i == len(arr)-1:
            i = 0
        else: i+=1
        count+=1
    else:
        arr.pop(i)
else:
    print("Result: ",arr[0])
