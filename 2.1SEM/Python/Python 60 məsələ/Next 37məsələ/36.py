b = int(input("B= "))
n = int(input())
sum=0
while n>=0:
    if n%b==0: sum+=n
else: print("B-e bolunen ededlerin cemi: " + str(sum))

#B ədədi verilir. Sonra müsbət ədədlər daxil edilir
#B-ə bölünən ədədlərin cəmi tapılır. Mənfi ədəd daxil ediləndə program işini bitirir