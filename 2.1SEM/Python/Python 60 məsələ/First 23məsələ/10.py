n = int(input("Enter the amount: "))
arr = [500, 100, 10, 2]
for x in arr:
    if n//x!=0: print(str(n//x) + " piece of " + str(x))
    n = n%x
else: 
    if n!=0: print("residual: " + str(n)) 

#Müəyyən miqdarda pul daxil edilir. Həmin pulu 500, 100, 10 və 2 olmaqla xırdalamalıdır.
#Qeyd: Əgər qalıq qalarsa sonra qeyd olunur.