binarycode = input()
decimalcode = 0
for i in range(len(binarycode)):
    if int(binarycode[i])==1: decimalcode+=pow(2, len(binarycode)-i-1)
else: 
    print("binary code: " + str(binarycode))
    print("decimal code: " + str(decimalcode))

#Ikilik say sistemində verilmiş ədədi 10-luq say sisteminə keçirdən program