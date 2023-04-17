M = int(input())
setirler = []
for i in range(M):
    setirler.append(input())
for i in range(len(setirler)):
    if len(setirler[i])%2!=0:
        print(setirler[i][len(setirler[i])//2])
#M sətrli massivdə verilmiş sətrin uzunluğu tək olarsa onun ortancıl elementini ekrana çıxaran program