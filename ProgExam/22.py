n = int(input())
counttek = 0; countcut=0
while n:
    if n%10%2==0: countcut+=1
    else: counttek+=1
    n//=10
else:
    print("cut reqemlerin sayi: " + str(countcut))
    print("tek reqemlerin sayi: " + str(counttek))

#Verilmiş ədədin tək və cüt rəqəmlərinin sayını hesablayan proqram