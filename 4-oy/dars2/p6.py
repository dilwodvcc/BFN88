import os
os.system("cls")

a = input(" Bowlaysizmi: ")
c = 0
if a == "ha":
    for i in range(0,100+1):
        if '3' in str(i):
            print(i)
            c += 1
    print(f"{c} ta son")