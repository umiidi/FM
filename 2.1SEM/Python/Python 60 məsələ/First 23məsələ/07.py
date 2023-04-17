import math
D = float(input("The diametry of the log: "))
A = float(input("The width of the square: "))
if D/2 >= math.sqrt(2*A*A):
    print("possible")
else: print("inpossible")

#D diametri olan kötükdən eni A olan kvadrat kəsmək mümkündür?