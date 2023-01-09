n = input()
for i in range(len(n)):
    if n[i] != n[len(n)-1-i]:
        print("NO")
        break
else: print("YES")

#2ci üsul:
n = input()
print(n == n[::-1])

#Verilmiş sətirin polindrom olub olmadığını yoxlayan proqram