#Verilmiş massivdə k-cı elementdən başlayaraq m elementdən ibarət qrupu çıxaran program
arr = list(map(int, input().split()))
k = int(input("k= "))
m = int(input("m= "))
for i in range(m):
    print(arr[k-1+i], end=" ")
    
