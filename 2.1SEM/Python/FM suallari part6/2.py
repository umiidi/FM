arr = list(map(int, input("Enter the numbers: ").split()))
count=0
print("Numbers:" , end=" ")
for x in range(len(arr)):
    if arr.index(arr[x])==x:
        for y in range(x+1, len(arr)):
            if arr[x]==arr[y]:
                break
        else:
            print(str(arr[x]) , end=' ')
            count+=1
else: print("\nThe number of non-repeating elements: " + str(count))

#Daxil edilmiş massivdə təkrarlanan ədədləri və onların sayını çap edən program