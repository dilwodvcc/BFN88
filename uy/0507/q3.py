import os 
os.system("cls")
def sort(a:list):
    b = sorted(list(set(a)))
    return b
a = [1,2,3,4,9,8,7,6,5]
print(sort(a))