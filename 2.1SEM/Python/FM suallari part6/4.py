n = input("Enter the number: ")
result = ""
for x in range(10):
    result += n.count(str(x)) * str(x)
else: 
    if result.startswith("0"):
        for i in range (1,len(result)): 
            if result[i]!="0":
                result = result[i] + result.replace(result[i], "" , 1)
                break
    print(result)

#Daxil edilmiş ədədin rəqəmlərindən ən kiçik ədədi düzəldir