thistuple = ("dekabr", "yanvar", "fevral", "mart", "aprel", "may", "iyun", "iyul", "avqust", "sentyabr", "oktyabr", "noyabr")
fesil = input("Please select menu:" + "\n1.Yaz" + "\n2. Yay" + "\n3. Payiz" + "\n4.Qis\n")
if fesil=='4':
    print(thistuple[0:3])
elif fesil == '1':
    print(thistuple[3:6])
elif fesil == '2':
    print(thistuple[6:9])
elif fesil == '3':
    print(thistuple[9:])
else: print("incorrect input")

#Fəsil daxil edilir, həmin fəsilə aid olan aylar çap  olunur