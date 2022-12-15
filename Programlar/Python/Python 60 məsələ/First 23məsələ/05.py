print("Enter size the box")
A = int(input("A="))
B = int(input("B="))
C = int(input("C="))
print("Enter size the door")
M = int(input("M="))
K = int(input("K="))
if (A<M and B<K) or (B<M and A<K):
    print("yes")
elif (A<M and C<K) or (C<M and A<K):
    print("yes")
elif (B<M and C<K) or (C<M and B<K):
    print("yes")
else: 
    print("no")



#Ölçüləri AxBxC olan qutu AxB ölçülü qapıdan keçə bilər?
