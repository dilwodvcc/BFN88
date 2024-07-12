import os
os.system("cls")

set1 = {10,20,30,40,50}
set2 = {10,30,40,60,70}
set3 = {}
for i in set1:
    print(i)
    if i in set2:
        set3.add(i)
print(set3)