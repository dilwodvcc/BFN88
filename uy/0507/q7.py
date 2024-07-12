import os
os.system("cls")
def maxkey(dct:dict):
    a = max(dct.keys())
    print(f"Max keys = {a}")
dct = {1:5, 2:4, 3:6, 4:2, 5:7, 6:9, 7:3, 8:0, 0:8}
maxkey(dct)