from os import system
system("cls")

def func(a, b):
    with open(a, 'r') as file:
        lines = file.readlines()
    managers = []
    for line in lines:
        data = line.strip().split(', ')
        ism = data[0]
        fam = data[1]
        lavozm = data[2]
        salary = data[3]

        if lavozm.lower() == "manager":
            managers.append(f"{ism}, {fam}, {lavozm}, {salary}")
    with open(b, 'w') as file:
        for p in managers:
            file.write(p + '\n')

a = 'e.txt'
b = 'm.txt'

func(a, b)