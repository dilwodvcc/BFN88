import os
os.system("cls")

a = (1,2,3,45,6,78,9,5,11,7,5,5,5,5)
a = list(a)
b = int(input("Son kiriting : "))

c = a.count(b)

if c > 0 :
    while c != 0:
        a.remove(b)
        c -= 1
a.sort()
a = tuple(a)
print(a)