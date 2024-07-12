import os
os.system("cls")

def musbat(a:list):
    if a > 0:
        return True
    return False
a = [1,2,3,4,5,6,7,8,9,-1,-2,-3,-4,-5,-6]
n = list(filter(musbat,a))
print(f"\t\tMusbat sonlar\n\t{n}")