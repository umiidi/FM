import math
A = float(input("Enter the edge of the cube: "))
H = float(input("Enter the height of the cylinder: "))
R = float(input("Enter the radius of the cylinder: "))
M = float(input("Enter the volume of liquid: "))
count=0
A = A**3
S = math.pi*(R**2)*H
if M>=A: count+=1
if M>=S: count+=2
if count==1: print("The first container")
elif count==2: print("The second container")
elif count==3: print("Both container")
else: print("None container")

#Tərəfi A olan kub və radiusu R, hündürlüyü H olan silindir mövcuddur. 
#Həcmi M olan suyun 1-ci qaba, 2-ci qaba yaxud da hər ikisinə yerləşə biləcəyini təyin edir