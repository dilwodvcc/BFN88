import os
os.system("cls")
def maxval(dct:dict):
    a = max(dct.values())
    print(f"Max val = {a}")
dct = {1:5, 2:4, 3:6, 4:2, 5:7, 6:9, 7:3, 8:0, 9:8}
maxval(dct)