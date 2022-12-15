arr = list(map(int, input("Enter the numbers: ").split()))


count=0
print("\nDifferent numbers:" , end=" ")
for x in range(len(arr)):
    if arr.index(arr[x])==x:
        print(str(arr[x]) , end=" ")
        count+=1
else: print("\nThe number of different elements: " + str(count))

count=0
print("\nNumbers:" , end=" ")
for x in range(len(arr)):
    if arr.index(arr[x])==x:
        for y in range(x+1, len(arr)):
            if arr[x]==arr[y]:
                break
        else:
            print(str(arr[x]) , end=' ')
            count+=1
else: print("\nThe number of non-repeating elements: " + str(count))

count=0
print("\nNumbers:" , end=" ")
for x in range(len(arr)):
    if arr.index(arr[x])==x:
        for y in range(x+1, len(arr)):
            if arr[x]==arr[y]:
                print(str(arr[x]) , end=' ')
                count+=1
                break

else: print("\nThe number of repeating elements: " + str(count))

#List verilir.
#Onun daxilində müxtəlif, təkrarlanan, təkrarlanmayan ədədlərin sayını və həmin ədədləri ekrana çap edən program