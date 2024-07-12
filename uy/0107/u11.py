import os
os.system("cls")

arr = [1,2,3,4,5,6,7,8,9,10]
arr1 = []
arr2 = []
for i in range(len(arr)):
    if i % 2 == 0:
        arr1.append(arr[i])
for i in range(len(arr)):
    if i % 2 != 0:
        arr2.append(arr[i])
print(arr1)
print(arr2)
for i in range(len(arr)):
    arr.pop()
arr.append(arr1)
arr.append(arr2)
arr = tuple(arr)
print(arr)