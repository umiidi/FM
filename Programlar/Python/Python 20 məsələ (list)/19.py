arr = list(map(int , input().split()))
max = arr[0]
tempmax = 0
for i in arr:
    if i>max:
        tempmax = max
        max = i
    else:
        if i > tempmax and i!=max:
            tempmax = i
else:
    print('boyuk: ' + str(max))
    print('ikinci en boyuk: ' + str(tempmax))

#Verilmiş massivin ən böyük və ikinci ən böyük elementini hesablayan program