import os
os.system("cls")

a = ["salom", 23,3.14,True]
n = []
for i in range(len(a)):
    n.append(type(a[i]))
print(n)