a = list(map(int, input("Enter the numbers: ").split()))
de = "" ; re = "" ; nre = ""
for x in range(len(a)):
    if a.index(a[x]) == x: 
        de+=str(a[x]) + " "
        if a.count(a[x]) == 1: nre+=str(a[x]) + " "
        else: re+=str(a[x]) + " "
print("\nThe number of different elements: " + str(len(de.split())) + "\nThose numbers: " + str(de.split()))
print("\nNumber of repeating elements: " + str(len(re.split())) + "\nThose numbers: " + str(re.split()))
print("\nNumber of non-repeating elements: " + str(len(nre.split())) + "\nThose numbers: " + str(nre.split()))

#List verilir.
#Onun daxilində müxtəlif, təkrarlanan, təkrarlanmayan ədədlərin sayını və həmin ədədləri ekrana çap edən program