import os
os.system("cls")

a = int(input("Son kiriting : "))

print("\tJuft sonlar ",end=": ")
for i in range(1,a+1):
    if i % 2 == 0:
        print(i,end=" ")