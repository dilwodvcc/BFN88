import os
os.system("cls")

a = int(input("Sekundni kiriting : "))

minut = a // 60
tmin = a / 60

print(f"Berilgan {a} sekuntdan \t{minut} minut o'tdi\n\tto'la minut {tmin}")
