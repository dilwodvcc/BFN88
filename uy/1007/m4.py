from os import system
system("cls")

def func(a, b):
    with open(a, 'r') as file:
        lines = file.readlines()
    book = []
    for line in lines:
        data = line.strip().split(', ')
        book_name = data[0]
        author = data[1]
        year = data[2]
        price = int(data[3])

        if author == "J.K. Rowling" and price > 20:
            book.append(line.strip())

    with open(b, 'w') as file:
        for p in book:
            file.write(p + '\n')

a = 'b.txt'
b = 'ee.txt'

func(a, b)