arr = tuple(map(int, input().split()))
min= min(arr)
print( "min element: " + str(min) + str("\nindeksleri: "), end='')
for i in range(len(arr)):
	if arr[i] == min:
		print(i, end  = " ")
else: print("\nsayi: " + str(arr.count(min)))

#Verilmiş massivin ən kiçik elementini, onun indekslərini və iştirak etmə sayını tapan program