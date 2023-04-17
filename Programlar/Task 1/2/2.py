n = int(input())
numbers = [0]*10
test = False
while n:
    numbers[n%10]+=1
    n//=10
else:
    for i in numbers:
        if i%2==1:
            if(test):
                print("No")
                break
            test=True
    else: print("Yes")


# Verilmiş ədədin rəqəmlərinin yerlərini dəyişdikdə polindrom ədəd alınmağını test edən program