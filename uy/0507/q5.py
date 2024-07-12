import os
os.system("cls")

def func(lst):
    dct = {}
    for i in lst:
        if i in dct:
            dct[i] += 1
        else:
            dct[i] = 1
    l = None
    c = float('inf')
    for i, count in dct.items():
        if count < c:
            c = count
            l = i
    return (l, c)

lst = [1, 3, 2, 1, 4, 1, 2, 3, 1, 4, 2]
nat = func(lst)
print(nat)  
