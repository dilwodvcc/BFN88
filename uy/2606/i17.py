import os
os.system("cls")

while 1 :

    a = int(input("5 xonali son kiriting : "))
    if a <= 999:
         print("ERROR")
    else:
         break

c = int(a / 100) % 10
print(f"son = {a}\nyuzlik = {c}")