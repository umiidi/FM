#Verilmiş massivdə elementlərin cəmini 1-ci yerə, müsbət elementlərin sayını isə 2ci yerə qoyun
arr = list(map(int, input().split()))
sum=0; count=0
for i in arr:
    sum+=i
    if i>0: count+=1
else: print("cemi: " + str(sum) + "\nmusbet ededlerin sayi: " + str(count))

