import os
os.system("cls")

arr = (-1, -2, -3, -5, 6, 4, 7)
lst = list(arr)
arr1 = [num for num in lst if num > 0]
print(arr1)
