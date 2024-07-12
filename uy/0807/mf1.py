import os
os.system("cls")

def tub(n, i=2):
    if n <= 1:
        return False
    if n == i:
        return True
    if n % i == 0:
        return False
    return tub(n, i + 1)

def rek(n, c=2):
    if c > n:
        return
    if tub(c):
        print(c)
    rek(n, c + 1)

N = int(input("Soni kiriting: "))
rek(N)
