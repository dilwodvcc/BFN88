import os
os.system("cls")

def almaw(lst):
    max = 0
    for i in lst:
        if i % 2 == 0:
            if max < i:
                max = i
    if max > 0:    
        return max
    else:
        return -1
    
lst = [1,2,3,4,5,6,7,8,9,10]
a = almaw(lst)
print(f"Listdagi eng katta juft son = {a}")