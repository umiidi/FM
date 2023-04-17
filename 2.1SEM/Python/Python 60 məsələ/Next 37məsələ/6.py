#Verilmiş massivdə k-cı elementdən başlayan m elementli qrupla
#p-ci elementdən başlayan m elementli qrupun yerini dəyişmək
arr = list(map(int, input().split()))
k = int(input("k= "))
m = int(input("m= "))
p = int(input("p= "))
for i in range(1,m+1):
    arr[k+i-2], arr[p+i-2] = arr[p+i-2], arr[k+i-2]
else: print(arr)

