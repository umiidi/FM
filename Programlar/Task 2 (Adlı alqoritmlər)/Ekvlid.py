a = int(input())
b = int(input())
if a<b: a,b = b,a
while a%b!=0:
      a,b = b, a%b
else: print(b)