def sum(list1,list2):
    memory=0
    if len(list2)>len(list1): list1, list2 = list2, list1
    list1.append(0)
    for i in range(len(list2)):
        list1[i]+=list2[i]+memory
        memory = list1[i]//10
        list1[i] -= memory*10
    else:
        list1[i]+=memory*10
        for j in range(i,len(list1)-1):
            if list1[j]>9:
                memory = list1[j]//10 
                list1[j+1]+=memory
                list1[j]-=memory*10
            else:
                if list1[len(list1)-1]==0: list1.pop(len(list1)-1)
                break
    return list1

list1 = [2,3,4]
list2 = [4,5,6]
print(sum(list1, list2))

#Müxtəlif ölçülü 2 list verilir. Onların elementlərinin cəmini tapan program