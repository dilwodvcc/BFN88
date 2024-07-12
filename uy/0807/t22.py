import os
os.system("cls")

a = ['1','2','3','4','5','6',"red","green","yellow"]
nat = list(map(lambda b: int(b) if b.isdigit() else 0, a))
print(nat)