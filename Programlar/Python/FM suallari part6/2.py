arr = list(map(int, input("Enter the numbers: ").split()))
count=0
print("Numbers:" , end=" ")
for x in range(len(arr)):
    if arr.index(arr[x])==x:
        if arr.count(arr[x]) != 1:
            print(str(arr[x]) , end=" ")
            count+=1
else: print("\nThe number of repeating elements: " + str(count))

#Daxil edilmiş massivdə təkrarlanan ədədləri və onların sayını çap edən program