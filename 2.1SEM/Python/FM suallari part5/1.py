print("size of chessboard:")
n = int(input())
m = int(input())
print("coordinate:")
i = int(input())
j = int(input())
c = int(input("black(1) or white(0)?\n"))
first=1 if c==0 else 0
if (i-1)%2 == (j-1)%2: first=c
if m%2==0: print("equals")
elif n%2==0: print("equals")
else:
    if first==1: print("black")
    else: print("white")

#sahmat meselesi. hansisa xanaya teyin edilmis renge gore qurulmus sahmat taxtasinda hansi rengli xana daha coxdur?