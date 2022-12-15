arr = list(map(int, input().split()))
count=0
for i in arr:
    if i%15==0: count+=1
else: print('sayi: ' + str(count))

#Verilmiş massivin eyni zamanda 3-ə və 5-ə bölünən elementlərinin sayını hesablayan program