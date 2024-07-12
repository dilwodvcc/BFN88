import os 
os.system("cls")

a = "salomlar"

b = a[len(a)//2:]
b = b[::-1]
print(a[:len(a)//2]+ b)