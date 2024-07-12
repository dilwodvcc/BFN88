import os
os.system("cls")

def valuse_0(dct):
    a = {k: 0 for k, v in dct.items()}
    return a
dct = {'a': 5, 'b': 3, 'c': 4, 'd': 2, 'e': 1}
a = valuse_0(dct)
print(a)