import os
os.system("cls")

def almaw(a:list):
    if a == 1:
        return True
    if a == 0:
        return False
a = [1,0,1,0,1,0,0,0,1,1,1]
n = list(map(almaw,a))
print(n)