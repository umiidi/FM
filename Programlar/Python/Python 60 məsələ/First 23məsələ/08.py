import math
S = float(input("Enter the area of the hall: "))
R = float(input("Enter the radius of the scene: "))
K = float(input("K= "))
if K<math.sqrt(S)-2*R-K:
    print("possible")
else:
    print("inpossible")

#Sahəsi S olan kvadrat zalda R radiuslu səhnəni ən qısa məsafə K olan yerdə yerləşdirmək mümkündürmü?