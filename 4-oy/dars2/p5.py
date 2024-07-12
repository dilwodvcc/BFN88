import os
os.system("cls")

a = input(" Bowlaysizmi: ")
c = 0
if a == "ha":
    for e in range(1,1000+1):
        c = 0
        for i in range(1, e+1):
            if e % i == 0:
                c += 1
        if c == 9:
            print(e)
else:
    print("\t\tO'ziz bilasiz ! ! !")