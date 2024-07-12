from os import system
system("cls")

def func(a, b):
    with open(a, 'r') as file:
        lines = file.readlines()
    market = {}
    for line in lines:
        data = line.strip().split(', ')
        iydi = int(data[0])
        narx = float(data[2])
        soni = int(data[3])
        total_cost = narx * soni

        if iydi in market:
            market[iydi] += total_cost
        else:
            market[iydi] = total_cost

    with open(b, 'w') as file:
        for iydi, total in market.items():
            if total > 100:
                file.write(f"{iydi}, {total}\n")


a = 't.txt'
b = 'bi.txt'

func(a, b)