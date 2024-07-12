import os 
os.system("cls")

a = int(input("son kirit : "))

soat = a // 3600
min = (a-soat*3600)//60
sekund = (a-(soat*3600+min*60))

print(f"{soat} soat {min} minut {sekund} sekund")