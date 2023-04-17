arr = list(map(int, input().split()))
minelement = arr[0]
for i in range(1, len(arr)):
    if i<minelement: minelement = i
else: print(minelement)

#2-ci üsul:
print(min(list(map(int, input().split()))))

#Siyahının ən kiçik elementini tapan proqram