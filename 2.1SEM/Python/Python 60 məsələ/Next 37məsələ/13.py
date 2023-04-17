arr = list(map(int, input().split()))
i=1
while arr[i]>=0:
    if arr[i]>arr[i-1]:
        print("no")
        break
    i+=1
else: print("yes")

#Verilmiş massivdə ilk mənfi elementə qədər əvvəlki ədədlərin azalan sıra ilə düzülüb düzülmədiyini yoxlayan program