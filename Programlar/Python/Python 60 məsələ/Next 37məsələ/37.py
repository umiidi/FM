countpositive = 0; countnegative = 0
n = int(input())
while n!=-65432:
    if n>0: countnegative+=1
    elif n<0: countpositive+=1
    n = int(input())
else: 
    print("musbet ededler: " + str(countpositive*100/(countpositive+countnegative)))
    print("menfi ededlerin: " + str(countnegative*100/(countpositive+countnegative)))

#Daxil edilmiş ədədlərə əsasən mənfi və müsbət ədədlərin % nisbətini tapır. -65432 daxil edildikdə program sonlanır