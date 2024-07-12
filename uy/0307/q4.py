import os
os.system("cls")

v = [10,20,30,40,50,60]
j = 0
dct = {
}
for i in range(len(v)):
    dct[j] = v[i]
    j+=1
print(dct)