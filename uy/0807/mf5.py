import os
os.system("cls")

def kub(n):
    a = []
    for i in range(1, n+1):
        if i**3 > n:
            a.append(i**3)
    return a
n = int(input("n ni kiriting: "))
nat = kub(n)
print(f"{n} dan katta kubdan iborat sonlar: {nat}")