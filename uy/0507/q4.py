import os
from collections import Counter
os.system("cls")

def tkr(lst):
    count = Counter(lst)
    b = count.most_common(1)[0]
    return b
lst = [4,4,2,3,4,1,2,3,4,4,2,4,4,4,4]

a = tkr(lst)

print(a)
