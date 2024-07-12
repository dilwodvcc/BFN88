from os import system
system("cls")

def ball(scores):
    return sum(scores) / len(scores)
def func(a, b):
    with open(a, 'r') as f:
        lines = f.readlines()
    higt = []
    for line in lines:
        data = line.strip().split(', ')
        name = data[0]
        age = int(data[1])
        scores = list(map(int, data[2:]))
        ortaca = ball(scores)
        if ortaca > 70:
            higt.append(f"{name}, {ortaca:.1f}")
    with open(b, 'w') as file:
        for student in higt:
            file.write(student + '\n')
a = 'student.txt'
b = 'higt.txt'
func(a, b)
