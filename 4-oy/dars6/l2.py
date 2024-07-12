import os 
os.system("cls")

def oqiw(a:int):
    birliklar = ["","Bir", "Ikki", "Uch", "To'rt", "Besh", "Olti", "Yetti", "Sakkiz", "To'qqiz"]
    onliklar = ["","O'n", "Yigirma", "O'ttiz", "Qirq", "Ellik", "Oltmish", "Yetmish", "Sakkson", "To'qson"]
    yuzliklar = ["","Bir yuz", "Ikki Yuz", "Uch Yuz", "To'rt Yuz", "Besh Yuz", "Olti Yuz", "Yetti Yuz", "Sakkiz Yuz", "To'qqiz Yuz"]
    if a == 0:
        return "nol"
    
    yuz = a // 100
    on = (a % 100) // 10
    bir = a % 10
    
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

