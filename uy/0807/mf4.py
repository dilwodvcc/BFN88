import os
os.system("cls")

lst = [1, -2, 3, -4, 5, -6]
lmb = lambda i: -i if i > 0 else i * 2
nat = list(map(lmb, lst))
print(nat)