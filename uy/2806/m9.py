import os
os.system("cls")

a = int(input("Son kiriting : "))
c1 = 0
c2 = 0
print("Juft sonlar ",end=": ")
for i in range(1,a+1):
    if i % 2 == 0:
        print(i,end=" ")
        c1 += 1
print()
print("Toq sonlar ",end=": ")
for i in range(1,a+1):
    if i % 2 == 1:
        print(i,end=" ")
        c2 += 1
print()
print(f"Juftlar {c1} ta\nToqlar {c2} ta")