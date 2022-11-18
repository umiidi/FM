import math
X = float(input("X= "))
Y = float(input("Y= "))
if X>Y: print("Z=√XY= " + str(math.sqrt(X*Y)))
else: print("Z=ln(X+Y)= " + str(math.log(X+Y,math.e)))

#X və Y ədədləri verilib.
#ƏgərX>Y olarsa Z=√XY, Əks halda Z=ln(X+Y) hesablayın