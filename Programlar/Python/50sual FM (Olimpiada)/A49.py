n = int(input("eded: "))
a = int(n%10)
b = int(n/10%10)
c = int(n/100)
if a>=b and b>=c: result = a*100 + b*10 + c
elif a>=c and c>=b: result = a*100 + c*10 + b
elif b>=a and a>=c: result = b*100 + a*10 + c
elif b>=c and c>=a: result = b*100 + c*10 + a
elif c>=a and a>=b: result = c*100 + a*10 + b
else: result = c*100 + b*10 + a
print(result)

#3reqemli ededin reqemlerini ele deyismek lazimdir ki, eded maksimum olsun
