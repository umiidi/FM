arr = list(map(int, input().split()))
for i in range(len(arr)):
    if arr[i]==0:
        arr[i] = arr[i-1] + arr[i-2]
else: print(arr)

#Verilmiş massivdə 0-a bərabər olan elementləri ondan əvvəl gələn 2element ilə cəmləsin