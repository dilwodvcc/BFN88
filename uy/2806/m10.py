import os
os.system("cls")
a = int(input("a ni kiriting : "))
while 1:
    b = int(input("b ni kiriting : "))
    if a < b:
        break
    else:
        print("b ni kottoroq kiriting !")
c = 0
print("oxrigi 3 ta juft sonlar ",end=": ")
while a < b:
    if b % 2 == 0:
        print(b,end=" ")
        c += 1
    if c == 3:
        break
    b -= 1