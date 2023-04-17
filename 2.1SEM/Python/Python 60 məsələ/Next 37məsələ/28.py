M = int(input())
setirler = []
for i in range(M):
    setirler.append(input())
for i in setirler:
    for j in range(len(i)):
        print(i[j], end= " ")
    else: print()

    #M sətrli massivdə hər sətrin hərflərini arasında boşluq olmaqla ekrana çıxaran program