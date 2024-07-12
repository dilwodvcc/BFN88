import os 
os.system("cls")

a = [1,2,3,4,5,6,7,8,9]
juft = []
toq = []
c = ()
c = list(c)
for i in a:
    if i%2 == 0:
        juft.append(i)
    else:
        toq.append(i)
c.append(juft)
c.append(toq)
c = tuple(c)
print(c)