n = int(input())
numbers = [0]*10
while n:
    numbers[n%10]+=1
    n//=10
else:
    for i in numbers:
        if i >=2:
            print("Yes")
            break
    else: print("No")

# Verilmiş ədədin bəzi rəqəmlərini silməklə minimum uzunluğu 3 olan polindrom ədəd almağın mümkündürmü?
