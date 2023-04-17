arr = list(map(int, input().split()))
tek = 0; cut = 0
for i in arr:
    if i%2==0:
        if i!=0: cut+=1
    else: tek+=1
else:
    print('cut elementlerin sayi: ' + str(cut))
    print('tek elementlerin sayi: ' + str(tek))

#Verilmiş massivin tək və cüt elementlərinin sayını hesablayan program