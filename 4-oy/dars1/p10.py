import os 
os.system("cls")

a  = int(input("son kiriting : "))

b = a // 1000
c = a // 100 % 10
e = a //10 % 10
d = a % 10

print(b+d+c+e)
