import os
os.system("cls")
a = []
c = 0
while c == 5:
    b = int(input("Son kiriting  :  "))
    c += 1
    a.append(b)

maxs = sum(a) - min(a)
mins = sum(a) - max(a)
print(maxs,mins)
