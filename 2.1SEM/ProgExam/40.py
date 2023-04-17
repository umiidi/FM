arr = list(map(int, input().split()))
for i in arr:
    if arr.count(i)>1: 
        while arr.count(i)!=1:
            arr.remove(i)
else: print(arr)

#2ci üsul: favorite
print(set(map(int, input().split())))

#3cü üsul:
arr = list(map(int, input().split()))
arr2=[]
for i in arr:
    if i not in arr2:
        arr2.append(i)
else: print(arr2)

#Verilmiş siyahıda eyni elementləri silən və elementləri unikal edən program
