M = int(input())
setirler = []
for i in range(M):
    setirler.append(input())
for i in range(len(setirler)):
    print(str(i+1), "setrde: " + str(setirler[i].count(" ")))

# M sətrli massivdə hər sətr üzrə boşluqların sayını ekrana çap edir