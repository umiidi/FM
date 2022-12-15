arr = list(map(int, input().split()))
musbet=0; menfi=0
for i in arr:
    if i>=0:  musbet+=1
    else: menfi+=1
else: 
    print('musbet ededlerin sayi: ' + str(musbet))
    print('menfi ededlerin sayi: ' + str(menfi))

#Verilmiş massivin mənfi və müsbət elementlərinin sayını hesablayan program