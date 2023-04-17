arr = list(map(int, input().split()))
musbet = []; menfi = []
for i in arr:
    if i>0: musbet.append(i)
    elif i<0: menfi.append(i)
else:
    print("musbet ededler: " + str(musbet))
    print("menfi ededler: " + str(menfi))

#Verilmiş massivdən ilk yeni alt massiv yaradın. Birinci - müsbət, ikinci mənfi ədədlər