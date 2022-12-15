counttoplama = 0; countvurma = 0
cem = 0; vurma=1
x = int(input())
while x!=55555:
    if x%2==0:
        vurma*=x
        countvurma+=1
    else:
        cem+=x
        counttoplama+=1
    x = int(input())
else:
    print("tek ededlerin cemi: " + str(cem))
    print("toplama emellerin sayi: " + str(counttoplama-1))
    print("cut ededlerin hasili: " + str(vurma))
    print("vurma emellerin sayi: " + str(countvurma-1))

#Nömrələr ardıcıl olaraq daxil edilir. Tək ədədlərin cəmi, cüt ədədlərin hasilini tapmalı
#Vurma və toplama əməllərinin sayını tapmalı
