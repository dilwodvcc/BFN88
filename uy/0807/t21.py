import os
os.system("cls")
a = ["instagram", "telegram", "facebook", "tik-tok"]
b = input("So'zni kiriting: ")
nat = list(filter(lambda x: b in x, a))
print(nat)