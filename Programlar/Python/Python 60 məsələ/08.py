import math
S = float(input("Sahə= "))
R = float(input("Səhnənin radiusu= "))
K = float(input("K= "))
if K<math.sqrt(S)-2*R-K:
    print("mümkündür")
else:
    print("mümkün deyil")

#Sahəsi S olan kvadrat zalda R radiuslu səhnəni ən qısa məsafə K olan yerdə yerləşdirmək mümkündürmü?