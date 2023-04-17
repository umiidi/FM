import random
allcount = int(input())
count = 0 
for i in range(allcount):
    x = random.uniform(-1,1)
    y = random.uniform(-1,1)
    if x*x + y*y <= 1: count+=1
else: print(4*count/allcount)

#pi ədədini təxmini hesablayan program
