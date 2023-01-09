arr = list(map(int, input().split()))
maxelement = arr[0]
for i in range(1, len(arr)):
    if i>maxelement: maxelement = i
else: print(maxelement)

#2-ci üsul:
print(max(list(map(int, input().split()))))

#Siyahının ən böyük elementini tapan proqram