#Verilmiş massivdə tək və cüt yerdə duran elementlərin yerini dəyişən program
arr = list(map(int,  input().split()))
for i in range(0,len(arr)-1,2):
    arr[i], arr[i+1] = arr[i+1], arr[i]
else: print(arr)
