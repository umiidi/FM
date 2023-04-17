n = int(input())
eks = 0
while n:
    eks = eks*10 + n%10
    n//=10
else:
    if n == eks: print("Yes")
    else: print("No")

# Verilmiş ədədin polindrom olub-olmadığını yoxlayan program