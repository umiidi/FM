import numpy as np
a = int(input("Size of the matrix"))
arr = np.random.randint(1, 10, size = (a,a))
print(arr)
print("Transposed matrix")
print(arr.T)

#Verilmiş ölçüdə random ədədlərdən ibarət matris qurulur, çap edilir,
# sonra həmin matrisin transponirə edilmiş forması çap olunur