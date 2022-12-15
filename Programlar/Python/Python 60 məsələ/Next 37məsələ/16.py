arr = list(map(int, input().split()))
positive = 0 ; negative = 0
for i in arr:
    if i>0: positive+=i
    elif i<0: negative+=i
if positive!=-negative:
    arr.append(-(positive+negative))
print(arr)

#Verilmiş massivdə mənfi və müsbət ədədlərin cəminin modulunun bərabərləşməsi üçün massivə 1element əlavə edilsin