def checkPolindrom(n):
    if n == n[::-1]: return True
    else: return False

def checkPseudoPolindrom(n):
    c = None
    for i in n:
        if c == i: continue
        if n.count(i)%2 == 1:
            if c: return False
            c = i
    else: return True

def checkQuasiPolindrom(n):
    for i in n:
        if n.count(i) >= 2: return True
    else:  return False

n = input()
if checkPolindrom(n): print("Polindrom")
elif checkPseudoPolindrom(n): print("PseudoPolindrom")
elif checkQuasiPolindrom(n): print("QuasiPolindorm")
else: print("None")

#Verilmiş sətrin polindrom, pseudo polindrom, yoxsa quasi polindrom olduğunu təyin edən program
