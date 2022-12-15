M = int(input())
setirler = []
for i in range(M):
    setirler.append(input())
for i in range(len(setirler)):
    setirler[i] = setirler[i].replace('?','*')
else: print(setirler)

# M sətrli massivdə hər sətrdə '?' simvolunu '*' simvolu ilə əvəzləmək