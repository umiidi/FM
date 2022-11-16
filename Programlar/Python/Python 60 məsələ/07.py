import math
D = float(input("Kötüyün diametri: "))
A = float(input("Kvadratın eni: "))
if D/2 >= math.sqrt(2*A*A):
    print("mümkündür")
else: print("mümkün deyil")

#D diametri olan kötükdən eni A olan kvadrat kəsmək mümkündür?