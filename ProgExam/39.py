s=[2,5,7,[3,5,4],8]
for i in range(len(s[3])-1, -1, -1):
    print(s[3][i], end=' ')

#2ci üsul:
s=[2,5,7,[3,5,4],8]
print(s[3][::-1])

#Verilmiş s=[2,5,7,[3,5,4],8] siyahısının üçüncü elementini  əks istiqamətdə çapa verən proqram tərtib edin