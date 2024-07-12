import os
os.system("cls")

def sets(dct):
    sts = set()
    for key, value in dct.items():
        sts.add(key)
        sts.add(value)
    return sts

dct = {'a': 5, 'b': 3, 'c': 4, 'd': 2, 'e': 1}

n = sets(dct)
print(n)