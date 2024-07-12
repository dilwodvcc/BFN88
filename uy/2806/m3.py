import os
os.system("cls")

print("\tTub sonlar ",end=": ")
for i in range(10,100):
    c = 0
    for b in range(1,i+1):
        if i % b == 0:
            c += 1
    if c == 2:
        print(i,end=" ")