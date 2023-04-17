x = float(input("x= "))
y = float(input("y= "))
z = float(input("z= "))
if z>=y and y>=x:
    x = x*2
    y = y*2
    z = z*2
else:
    x = abs(x)
    y = abs(y)
    z = abs(z)
print(x,y,z)

#x y z ededleri verilir. z>=y>=x olarsa ededleri ikiqat artirin, eks halda mutleq qiymetleri ile evezleyin