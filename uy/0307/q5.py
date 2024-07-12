import os
os.system("cls")

sets = {'e': 1, 'd': 2, 'b': 3, 'c': 4, 'a': 5}
keys = []
value = []
for k,v in sets.items():
    keys.append(k)
    value.append(v)
dct = {}
for i in range(len(keys)):
    dct[value[i]] = keys[i]
print(dct)