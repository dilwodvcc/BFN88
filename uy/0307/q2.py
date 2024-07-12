import os
os.system("cls")

a = {'a': 5, 'b': 3, 'c': 4, 'd': 2, 'e': 1}
b = dict(sorted(a.items(), key=lambda item: item[1]))
print(f"  1 - holat   : {a}")
print(f"Keyingi holat : {b}")