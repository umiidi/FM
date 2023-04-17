M = int(input())
setirler = []
for i in range(M):
    setirler.append(input())
heca = input("Heca: ")

for i in range(len(setirler)):
    print(str(i+1), ".setirde: ", str(setirler[i].count(heca)))

#M sətri verilir. Verilmiş hecanın həmin sətrdə neçə dənə olduğunu tapan program