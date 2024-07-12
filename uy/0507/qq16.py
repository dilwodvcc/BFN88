import os
os.system("cls")

def almaw(a:list):
    if isinstance(a,float):
        return int(a)
    if isinstance(a,int):
        return float(a)
a = [1, 2.5, 3.7, 4, 5.2]
n = list(map(almaw,a))
print(n)