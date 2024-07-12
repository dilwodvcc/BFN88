import os
os.system("cls")

a = int(input("2 xonali son kiriting : "))

b = (a // 10) % 10
c = a % 10

print(f"1 - holat\n\t son = {a}")

d = (c * 10) + b

print(f"keyingi holat\n\t son = {d}")