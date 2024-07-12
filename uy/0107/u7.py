import os
os.system("cls")

arr = ['a','b','d','u','l','l','o','h']
arr1 =  []
for i in range(len(arr)):
    arr1.append(i)
    arr1.append(arr[i])
arr1 = tuple(arr1)
for i in range(len(arr)):
    arr.pop()
arr.append(arr1)
print(arr)