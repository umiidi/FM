arr = list(map(int, input().split()))
for i in range(len(arr)):
    if arr[i] != arr[len(arr)-1-i]:
        print("NO")
        break
else: print("YES")

#2ci üsul:
arr = list(map(int, input().split()))
print(arr == arr[::-1])

#Verilmiş siyahının polindrom olub olmadığını yoxlayan proqram