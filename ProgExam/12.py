import math
a,b,c = list(map(int, input().split()))
if a+b>c and b+c>a and c+a>b: 
    p=(a+b+c)//2
    s = math.sqrt(p*(p-a)*(p-b)*(p-c))
    print(s)
else: print("wrong")

#Üçbucağın üç tərəfinin uzunluğu verilmişdir. Onun sahəsini tapan proqram 