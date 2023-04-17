n = list(map(int, input().split()))
result = []
for i in range(len(n)):
    temp = []
    for j in range(i, len(n)):
        if(temp.count(n[j]) !=0 ): break
        else: temp.append(n[j])
    if len(temp) > len(result): result = temp
else: print(result)

#Daxil edilmiş ardıcıllıqda ən uzun unikal elementli alt ardıcıllığı tapan program
