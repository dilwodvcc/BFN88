import os
os.system("cls")

def sets(dct:dict):
    sts = []
    for k,v in dct.items():
        sts.append(k)
        sts.append(v)
    return set(sts)

dct = {1:5, 2:4, 3:6, 4:2, 5:7, 6:9, 7:3, 8:0, 0:8}
n = sets(dct)
print(n)