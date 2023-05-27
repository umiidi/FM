def Hanoy(n, A, B, C):
    if n == 1:
        print(str(A) + " to " + str(C))
        return
    Hanoy(n-1, A, C, B)
    Hanoy(1, A, B, C)
    Hanoy(n-1, B, A, C)

n = int(input("Disk sayi: "))
Hanoy(n, "A", "B", "C")
