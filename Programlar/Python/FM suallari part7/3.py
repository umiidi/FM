arr = list(map(int, input("Enter the numbers: ").split()))
count=0
print("Numbers:" , end=" ")
for x in range(len(arr)):
    if arr.index(arr[x])==x:
        for y in range(x+1, len(arr)):
            if arr[x]==arr[y]:
                print(str(arr[x]) , end=' ')
                count+=1
                break

else: print("\nThe number of repeating elements: " + str(count))

#Daxil edilmiş massivdə təkrarlanmayan ədədləri və onların sayını çap edən program