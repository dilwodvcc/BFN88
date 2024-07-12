import os,json
os.system("cls")

keys = ["a","b","c","d"]
values = [10,20,30,40]

dct = {}

for i in range(len(keys)):
    dct[keys[i]] = values [i]
print(json.dumps(dct,indent=2))