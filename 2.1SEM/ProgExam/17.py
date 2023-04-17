a = tuple(map(int, input().split()))
count=0
for i in a: 
    if i<7: count+=1
else: print(count)

#2ci üsul:
print(len([i for i in tuple(map(int,input().split())) if i<7]))

#Elementləri tam ədədlərdən ibarət olan verilmiş kortejin 7 dən kiçik olan elementlərinin sayını tapan program
