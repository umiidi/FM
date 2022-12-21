import math
n = int(input())
temp = int(math.sqrt(n))
result = 4 + (temp-1)*3*2 + math.pow(temp-1,2)*2
x = n-temp**2
if x!=0:
    a = x//(temp+1)+1
    b = x-a
    result+=a*3 + b*2
print(int(result))
