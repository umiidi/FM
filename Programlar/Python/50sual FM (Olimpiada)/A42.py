x = float(input())
y = float(input())
if x<0 and y<0:
    x = abs(x)
    y = abs(y)
elif x<0 or y<0:
    x+=0.5
    y+=0.5
else: 
    if not((x>=0.5 and x<=2) or (y>=0.5 and y<=2)):
        x/=10
        y/=10
print(x,y)

#x ve y heqiqi ededleri verilib, 
#eger her iki eded menfidirse onlarin qiymetlerini oz modullari ile evezleyir, 
#onlardan biri menfidirse her iki qiymeti 0.5 artirir,
#her ikisi musbetdirse ve eded {0.5 - 2.0} araligindadirsa her iki ededi 10 defe azaldir. diger hallarda deyisiklik olmur
