import os
os.system("cls")
a = int(input("a ni kiriting : "))
while 1:
    b = int(input("b ni kiriting : "))
    if a < b:
        break
    else:
        print("b ni kottoro kiriting !")
c = 0
print("oxrigi 3 ta juft sonlar ",end=": ")
while a < b:
    if a % 2 == 1:
        print(a,end=" ")
        c += 1
    if c == 3:
        break
    a += 1