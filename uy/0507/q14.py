import os
os.system("cls")

def filtr(lst):
    b = list(filter(lambda a: isinstance(a, str), lst))
    return b

arr = [1, 'hello', 3.14, 'world', 42, 'python', True]
nat = filtr(arr)
print(nat)