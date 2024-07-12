import os 
os.system("cls")

st1 = {1,2,3}
st2 = {2,3,4}
st2 = list(st1) + list(st2)
st3 = []
for i in st2:
    c = 0
    for j in st2:
        if i==j:
            c += 1
    if c == 2:
        st3.append(i)
st3=set(st3)
print(st3)