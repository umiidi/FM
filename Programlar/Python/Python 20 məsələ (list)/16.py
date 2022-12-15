arr = list(map(int , input().split()))
count=0
for i in range(1,len(arr)-1):
    if arr[i]<arr[i+1] and arr[i]<arr[i-1]: count+=1
else: print("sayi: " + str(count))

#Verilmiş massivdə lokal minimumların(sağ və sol elementlərindən kiçik) sayını hesablayan program