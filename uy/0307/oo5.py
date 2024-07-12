import os 
os.system("cls")

a = [{1,2,3},4]
print("1 - holat     : ",a)
b = a.pop(1)
c = a.pop(0)
c.add(b)
print("Keyingi holat : ",c)