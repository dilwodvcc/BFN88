import os
os.system("cls")

a = int(input("3 xonali son kiriting : "))

b = a // 100
d = (a // 10) % 10
c = a % 10 

e = b * 100 + c * 10 + d

print(f"1 - holat\n\t son = {a}")
print(f"keyingi holat\n\t son = {e}")