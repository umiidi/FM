a = float(input())
b = float(input())
c = float(input())
d = float(input())
if a>=b and b>=c and c>=d:
    a = max(a,b,c,d)
    b = max(a,b,c,d)
    c = max(a,b,c,d)
    d = max(a,b,c,d)
    print(a,b,c,d)
elif d>c and c>b and b>a: print(a,b,c,d)
else:
    a*=a
    b*=b
    c*=c
    d*=d
    print(a,b,c,d)

#a b c d ededleri verilib
#d<=c<=b<=a olarsa en boyuyunun qiymetini hamsina menimsedin
#a<b<c<d olarsa hec bir deyisiklik olmur
#eks halda ededleri kvadratlari ile evezleyir
