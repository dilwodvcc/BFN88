import os
os.system("cls")

a = (1,2,3,4,5,6,7,8,9,10)
a = list(a)
b = []

for i in range(len(a)):
    b.append(a[i]*a[i])
print(b)