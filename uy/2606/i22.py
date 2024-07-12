import os
os.system("cls")

a = int(input("Sekundni kiriting : "))

soat = a // 3600
sekund = a - (soat*3600)

print(f"{soat} soat {sekund} sekund")