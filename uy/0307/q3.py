import os 
os.system("cls")

s1 = {5,2,3}
s2 = {2,5,4}
s3 = {3,4,5}

sets = list(s1)+list(s2)+list(s3)
for i in sets:
    if i in s1 and i in s2 and i in s3:
        sets.clear()
        sets.append(i)
sets = set(sets)
print(f"Uchalasi uchun umumiy son {sets}")