arr = list(map(int, input().split()))
while arr.count(0)!=0:
    arr.remove(0)
else: print(arr)

#Verilmiş massivdə 0-a bərabər olan elementləri silən program