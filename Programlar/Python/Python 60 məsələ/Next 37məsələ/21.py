arr = list(map(int, input().split()))
count = 0 ; avgcount=0 ; average = 0
for i in arr:
    if i%3 == 0: count+=1
    if i>0:
        average+=i
        avgcount+=1
else:
    average /=avgcount
    arr.insert(0, count)
    arr.insert(len(arr), average) 
    print(arr)

#Verilmiş massivdə 3-ə bölünən ədədlərin sayını və müsbət ədədlərin ədədi ortasını tapıb 
#onları massivin əvvəlinə və sonuna yazan program