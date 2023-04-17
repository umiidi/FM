arr = list(map(int, input().split()))
for i in range(len(arr)-1, -1, -1):
    print(arr[i], end=' ')

#2ci üsul:
arr = list(map(int, input().split()))
print(arr[::-1])

#3cü üsul:
arr = list(map(int, input().split()))
arr.reverse()
print(arr)

#Verilmiş siyahını əks istiqamətdə çap edən proqram 