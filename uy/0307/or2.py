import os 
os.system("cls")

a = {'c':9,'a':6,'b':5,'z':4,'s':1,'d':2}
b = []
for (k,v) in a.items():
    b.append(k)
b.sort()
print(b)