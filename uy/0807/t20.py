import os
os.system ("cls")

def amal(dct:dict):
    c = {}
    a = []
    for k,v in dct.items():
        c = []
        x = k+v
        c.append(x)
        y = k-v
        c.append(y)
        z = k*v
        c.append(z)
        c = tuple(c)
        a.append(c)
        a= list(a)
    return a

a = [1,2,3,4,5]
b = [0,1,2,2,4]
dct ={}
for i in range(len(a)):
    dct[a[i]] = b[i]
nat = amal(dct)
print(nat)