import os
os.system("cls")

a = int(input("Sekundni kiriting : "))

soat = a // 3600
tsoat = a / 3600

print(f"Berilgan {a} sekuntdan \t{soat} soat o'tdi\n\tto'la o'tgan soat {tsoat}")
