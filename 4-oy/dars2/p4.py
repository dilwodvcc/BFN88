import os
os.system("cls")

a = int(input("Ustunni kiriting : "))
i = 1
natija = 0
while a >= 0:
    natija += int("1"*i)
    i += 1
    a -= 1
print("Yigindi = ",natija)