import time
M = int(input())
setirler = []
for i in range(M):
    setirler.append(input())
for i in setirler:
    for j in range(len(i)):
        print(i[j], end="")
        if i[j] == '.':
            namedtuple = time.localtime()
            timestring = time.strftime("%H:%M", namedtuple)
            print(timestring, end="" )
    else: print()

#M sətrli massivdə '.' simvolundan sonra kompüterdəki cari saatı yazın