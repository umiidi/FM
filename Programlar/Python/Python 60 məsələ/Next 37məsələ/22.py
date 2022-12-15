M = int(input("M= "))
setirler = []
for i in range(M):
    setirler.append(input())
max = len(setirler[0])
for i in range(1,len(setirler)):
    if len(setirler[i])<max: 
        setirler[i] = (max-len(setirler[i]))*'*' + setirler[i]
    else:
        max = len(setirler[i])
        for j in range(i):
            setirler[j]  = (max-len(setirler[j]))*'*' + setirler[j]
else: print(setirler)


#Verilmiş massivdə ən uzun sətirdəki simvolların sayını tapın. 
#Digər sətrlərin ən uzun sətr olması üçün sətrin əvvəlinə * əlavə edin