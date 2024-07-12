import os 
os.system("cls")
def mins(a:list):
    b = sorted(list(set(a)))[0]
    c = sorted(list(set(a)))[1]
    return b,c
a = [1,2,3,4,9,8,7,6,5]
print(mins(a))