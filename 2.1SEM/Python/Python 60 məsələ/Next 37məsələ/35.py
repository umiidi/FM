sum = 0
n = int(input())
while n!=99999:
    sum+=n
    if n==0: print("cari cem: " + str(sum))
    n = int(input())
else: print("cem: " + str(sum))

#Aralarında sıfır olmayan daxil edilmiş ədədləri toplayın.
# 0 daxil ediləndə cəmin cari dəyərini göstərin, 99999 daxil ediləndə program işini bitirir