def toArr(arr):
    for i in range(len(arr)):
        if type(arr[i])==list:
            index = i
            temp  = arr[i]
            arr.pop(index)
            for j in range(len(temp)):
                arr.insert(index+j, temp[j])
            else: toArr(arr)

    else: return arr
arr = [1,2,3,[4,5,6,[7,8,9,[10,11,12],13,14,[16,17]],18,19,20],21,22]
print(toArr(arr))

#Bəzən list içində list olur. Həmin listləri əsas listə element olaraq əlavə edən program