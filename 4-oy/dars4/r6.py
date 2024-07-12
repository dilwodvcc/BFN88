import os
os.system("cls")

dct = {'a':100,'b':200,'c':300}
va = 1
for (k,v) in dct.items():
    if v == 200:
        va = v
if va == 200:
    print('bor')
else:
    print('yo\'q')