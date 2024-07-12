import os 
os.system("cls")

def oqiw(a:int):
    birliklar = ["","Bir", "Ikki", "Uch", "To'rt", "Besh", "Olti", "Yetti", "Sakkiz", "To'qqiz"]
    onliklar = ["","O'n", "Yigirma", "O'ttiz", "Qirq", "Ellik", "Oltmish", "Yetmish", "Sakkson", "To'qson"]
    yuzliklar = ["","Bir yuzi", "Ikki Yuzi", "Uch Yuzi", "To'rt Yuzi", "Besh Yuzi", "Olti Yuzi", "Yetti Yuzi", "Sakkiz Yuzi", "To'qqiz Yuzi","Yuz"]
    if a == 0:
        return "nol"

    yuz = a // 100
    on = (a % 100) // 10
    bir = a % 10
    if a // 1 == 100:
        natija = yuzliklar[10]
    else:
        natija = yuzliklar[yuz]

    if on > 0:
        if natija:
            natija += " "
        natija += onliklar[on]
    
    if bir > 0:
        if natija:
            natija += " "
        natija += birliklar[bir]
        
    #ciroy ucun 
    return natija.capitalize()


a = int(input("son kiriting :\t"))
print(oqiw(a))

