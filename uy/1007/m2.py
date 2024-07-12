from os import system
system("cls")

def func(a, b):
    with open(a, 'r') as file:
        lines = file.readlines()
    sara = []
    for line in lines:
        data = line.strip().split(', ')
        name = data[0]
        narx = float(data[1])
        son = int(data[2])
        if narx < 10:
            sara.append(f"{name}, {narx}, {son}")
    with open(b, 'w') as file2:
        for p in sara:
            file2.write(p + '\n')

a = 'p.txt'
b = 'ch.txt'

func(a, b)
