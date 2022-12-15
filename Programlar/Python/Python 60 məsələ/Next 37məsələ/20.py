arr = list(map(int, input().split()))
for i in range(len(arr)-1):
    if arr[i]==0 and arr[i+1]==0:
        print("yes")
        break
else: print("no")

#Verilmiş massivdə ardıcıl iki 0-n olub olmadıgını yoxlayan program