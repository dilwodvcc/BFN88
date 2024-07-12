import math
import os
os.system("cls")

a=int(input("son kiriitng : "))
c = a
su = 0
while a != 0:
    b = a % 10
    su =su + int(math.pow(b,3))
    a = a // 10
if c == su:
    print(f"{c} bu armstrong son")
else:
    print("yo'q")