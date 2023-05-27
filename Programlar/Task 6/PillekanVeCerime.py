n = int(input("Pillelerin  sayi: "))
arr = []
for i in range(n):
    arr.append(int(input(str(i+1) + ". pille: ")))
result = []
i = n-1
while i>0:
    if arr[i] < arr[i-1]:
        result.insert(0, i+1)
        i-=1
    else:
        result.insert(0, i)
        i-=2
else: print(result)
