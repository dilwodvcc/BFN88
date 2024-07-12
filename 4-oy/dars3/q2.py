import os 
os.system("cls")

a = [[1,2,3],[4,5,6],[7,8,9]]

for i in range(len(a)):
    for j in range(len(a[i])):
        if j %2 == 1:
            a[i][j] *= a[i][j]
print(a)