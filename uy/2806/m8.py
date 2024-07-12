import os
os.system("cls")

a = int(input("Son kiriting : "))

print("\tToq sonlar ",end=": ")
for i in range(1,a+1):
    if i % 2 == 1:
        print(i,end=" ")