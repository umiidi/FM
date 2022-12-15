M = int(input("M= "))
setirler = []
for i in range(M):
    setirler.append(input())
oneword = []
for i in setirler:
    if len(i.split(" "))==1:
        oneword.append(' ' + i)
else: print(oneword)

#M sətir simvol daxil edilir. Bir sözdən ibarət olan sətirləri boşluq qoyaraq bir sətirdə birləşdirir