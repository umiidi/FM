arr = list(map(int , input().split()))
min1 = min(arr)
while arr.count(min1)!=0:
    arr.remove(min1)
min2 = min(arr)
print(str(min1) + " " , str(min2))

#Verilmiş massivin ən kiçik və ikinci ən kiçik elementini hesablayan program