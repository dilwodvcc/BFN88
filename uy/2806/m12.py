import os
os.system("cls")

a = int(input("Son kiriting : "))

c = 0
for b in range(1,a+1):
    if a % b == 0:
        c += 1
if c == 2:
    print("Tub son")
else:
    print("Tub son emas")