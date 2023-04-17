n = int(input("eded: "))
a = int(n%10)
b = int(n/10%10)
c = int(n/100)
if a>=b and b>=c: result = c*100 + b*10 + a
elif a>=c and c>=b: result = b*100 + c*10 + a
elif b>=a and a>=c: result = c*100 + a*10 + b
elif b>=c and c>=a: result = a*100 + c*10 + b
elif c>=a and a>=b: result = b*100 + a*10 + c
else: result = a*100 + b*10 + c
print(result)

#3reqemli ededin reqemlerini ele deyismek lazimdir ki, eded minimal olsun
