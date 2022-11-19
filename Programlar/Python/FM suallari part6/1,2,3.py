a = list(map(int, input("Enter the numbers : ").split()))
de = "" ; re = "" ; nre = ""
for x in range(len(a)):
    if a.index(a[x]) == x: 
        de+=str(a[x]) + " "
        if a.count(a[x]) == 1: nre+=str(a[x]) + " "
        else: re+=str(a[x]) + " "
print("\nThe number of different elements: " + str(int(len(de)/2)) + "\nThose numbers: " + str(de))
print("\nNumber of repeating elements: " + str(int(len(re)/2)) + "\nThose numbers: " + str(re))
print("\nNumber of non-repeating elements: " + str(int(len(nre)/2)) + "\nThose numbers: " + str(nre))

#List verilir.
#Onun daxilində müxtəlif, təkrarlanan, təkrarlanmayan ədədlərin sayını və həmin ədədləri ekrana çap edən program