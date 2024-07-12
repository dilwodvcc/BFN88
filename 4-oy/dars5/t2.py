import os
os.system("cls")

def tupl(a):
   c = sorted(a,reverse=True)
   return c

a = [1,2,3,4,5,6,7]
b = list(map(tupl,a))
print(b)