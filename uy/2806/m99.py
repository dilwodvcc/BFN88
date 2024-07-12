import os
os.system("cls")

a = int(input("Son kiriting : "))
c1 = 0
c2 = 0
for i in range(1,a+1):
    if i % 2 == 0:
        c1 += 1
    else:
        c2 += 1
print(f"Juftlar {c1} ta\nToqlar {c2} ta")