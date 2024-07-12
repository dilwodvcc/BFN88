import os
os.system("cls")

def delet(dct, k):
    if k in dct:
        del dct[k]
    return dct
dct = {'a': 5, 'b': 3, 'c': 4, 'd': 2, 'e': 1}
print(f"\t\tTanlang\n{dct}")
key = input("Harf kiriting : ")
a = delet(dct, key)
print(a)
