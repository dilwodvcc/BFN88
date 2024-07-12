import os
os.system("cls")

a = int(input("Son kiriting : "))
count = 0
while a != 0:
    b = a % 10
    a //= 10
    count += b 
print("Natija = ",count)