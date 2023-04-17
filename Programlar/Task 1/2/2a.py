n = input()
c = None
for i in n:
    if c == i: continue
    if n.count(i)%2 == 1:
        if c:
            print("No")
            break
        c = i
else: print("Yes")

# Verilmiş sətrin rəqəmlərinin yerlərini dəyişdikdə polindrom ədəd alınmağını test edən program