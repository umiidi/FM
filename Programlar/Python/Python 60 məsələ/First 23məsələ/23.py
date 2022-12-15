y = int(input("Enter the year: "))
if y%4==0:
    if (y%100==0 and y%400!=0) or y%4000==0: print("no")
    else: print("yes")
else: print("no")

#İl daxil edilir.  Bu ilin uzun il olub-olmadığını təyin edir

#Qayda: 
#Əksər 4-ə qalıqsız bölünən illər uzun il sayılır. Məs, 1992, 1996, 2000, 2004, 2008, 2016, 2020 və s.
#2 istisna:
# 1) 100-ə qalıqsız bölünən illərdən ancaq 400-ə qalıqsız bölünən illər uzun il sayılır. 
# Nümunə: Uzun il: 1200, 1600, 2000, 2400 ..... Uzun il olmayanlar: 1700, 1800, 1900, 2100
# 2) 4000-ə qalıqsız bölünən illər uzun il hesab olunmur. Məs, 4000, 8000, 12000, 16000