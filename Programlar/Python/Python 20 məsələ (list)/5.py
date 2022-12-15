arr = tuple(map(int, input().split()))
max = max(arr)
print( "max element: " + str(max) + "\indeksler:  ", end='')
for i in range(len(arr)):
	if arr[i] == max:
		print(i, end  = " ")

#Verilmiş massivin ən böyük elementini və onun indekslərini tapan program (bir neçə max element ola bilər)