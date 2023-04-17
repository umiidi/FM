arr = list(map(int , input().split()))
for i in range(len(arr)//2):
    if arr[i]!=arr[len(arr)-i-1]:
        print("simmetrik deyil")
        break
else: print("simmetrikdir")

#Verilmiş massivin simmetrik olub olmadığını yoxlayan program