import os
os.system("cls")

print("\tBir xil raqamli sonlar ",end=": ")
for a in range(100, 1000):
    y = a // 100
    o = (a // 10) % 10
    b = a % 10

    if (y == o and y != b) or (y == b and y != o) or (o == b and o != y):
        print(a,end=" ")

