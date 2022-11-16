n = int(input())
cem=0; countr=0; max=0; min=n%10; hasil=1; cemc=0; countc=0; cemt=0; countt=0; cems=0; counts=0; 
while n>=1:
    cem+=n%10
    countr+=1
    if max<n%10: max = n%10
    if min>n%10: min = n%10
    hasil*=n%10
    if (n%10) % 2 == 0:
        cemc+=n%10
        countc+=1
    else: 
        cemt+=n%10
        countt+=1
    if n%10==2 or n%10==3 or n%10==5 or n%10==7:
        cems+=n%10
        counts+=1
    n//=10
else: 
    print("reqemleri cemi: ",cem)
    print("reqemleri sayi: ",countr)
    print("minimal reqem: ",max)
    print("minimal reqem: ",min)
    print("reqemleri hasili: ",hasil)
    print("cut reqemleri cemi: ",cemc)
    print("cut reqemleri sayi: ",countc)
    print("tek reqemleri cemi: ",cemt)
    print("tek reqemleri sayi: ",countt)
    print("sade reqemleri cemi: ",cems)
    print("sade reqemleri sayi: ",counts)


'''
reqemlerin cemi, hasili ve sayi
maksimum ve minimum reqem
cut reqemlerin cemi ve sayi
tek reqemlerin cemi ve sayi
sade ededlerin cemi sayi
'''
