import os
os.system("cls")

a = [1,2,3,4,5,6,7,8]
a1 = []
for i in range(len(a) - 1):
    a1.append(a[i] + a[i + 1])
print(a1)