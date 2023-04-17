n = int(input())
if n>0:
    primeNumber = [True] *(n+1)
    for i in range(2,len(primeNumber)):
        if primeNumber[i] == True:
            for j in range(i*i, len(primeNumber), i):
                primeNumber[j] = False
    else:
        for i in range(2, len(primeNumber)):
            if primeNumber[i] == True:
                print(i, " ")
else: print("Incorrect")
