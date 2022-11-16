print("Qutunun ölçüləri")
A = int(input("A="))
B = int(input("B="))
C = int(input("C="))
print("Qapının ölçüləri")
M = int(input("M="))
K = int(input("K="))
if (A<=M and B<=K) or (B<=M and A<=K):
    print("olur")
elif (A<=M and C<=K) or (C<=M and A<=K):
    print("olur")
elif (B<=M and C<=K) or (C<=M and B<=K):
    print("olur")
else: 
    print("olmur")



#Ölçüləri AxBxC olan qutu AxB ölçülü qapıdan keçə bilər?
