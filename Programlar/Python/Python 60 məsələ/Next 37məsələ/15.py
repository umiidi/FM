import random
arr = list(map(int, input().split()))
positive = 0 ; negative = 0
for i in arr:
    if i>0: positive+=1
    elif i<0: negative+=1
if positive!=negative:
    x = 1
    count = negative-positive
    if positive>negative: 
        x = -1
        count = -count
    for i in range(count):
        a = random.randint(1,10)
        arr.append(x*a)
print(arr)

#Verilmiş massivdə mənfi və müsbət ədədlərin sayını bərabərləşdirmək massivə element əlavə edən program