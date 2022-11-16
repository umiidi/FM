a = int(input())
b = int(input())
c = int(input())
if a+b>c and b+c>a and a+c>b:
    if a*a + b*b == c*c: print("Duzbucaqli")
    elif a*a + b*b < c*c: print("Korbucaqli")
    else: print("Itibucaqli")
else: print("Bele ucbucag yoxdur!")

#terefleri daxil edilmis ucbucagin hansi novune aid oldugunu cap edir