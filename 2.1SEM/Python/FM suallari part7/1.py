arr = list(map(int, input("Enter the numbers: ").split()))
count=0
print("Numbers:" , end=" ")
for x in range(len(arr)):
    if arr.index(arr[x])==x:
        print(str(arr[x]) , end=" ")
        count+=1
else: print("\nThe number of different elements: " + str(count))

#Daxil edilmiş massivdə müxtəlif ədədləri və onların sayını çap edən program