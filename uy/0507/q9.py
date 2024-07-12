import os
os.system("cls")

def almaw(dct):
    a = {v: k for k, v in dct.items()}
    return a
dct = {'a': 5, 'b': 3, 'c': 4, 'd': 2, 'e': 1}
a = almaw(dct)
print(a)