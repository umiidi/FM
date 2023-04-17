M = int(input("M= "))
setirler = []
for i in range(M):
    setirler.append(input())
saitler = ['a', 'ı', 'o', 'u', 'e', 'ə', 'e', 'ə', 'i', 'ö', 'ü']
for i in range(len(setirler)):
    count=0
    for j in setirler[i]:
        if j.lower() in saitler:
            count+=1
    else: print(str(i+1)+".setir: " + str(count) )

#M sətirli söz daxil edilir. Hər sətir üzrə neçə sait hərf olduğunu tapan program