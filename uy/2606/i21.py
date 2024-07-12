import os
os.system("cls")

a = int(input("Sekundni kiriting : "))

minut = a // 60
sekund = a - (minut*60)

print(f"{minut} minut {sekund} sekund")