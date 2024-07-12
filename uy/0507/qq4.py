import os
os.system("cls")

def tkror(lst):
    dct = {}
    for i in lst:
        if i in dct:
            dct[i] += 1
        else:
            dct[i] = 1
    n = None
    c = 0
    for i, count in dct.items():
        if count > c:
            c = count
            n = i
    return (n, c)

lst = [1,4,2,1,4,4,2,4,1,4,2,4,4,4,4]
a = tkror(lst)
print(a)
