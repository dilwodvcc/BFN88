import os
os.system("cls")

def ism(odam):
    if isinstance(odam[0], str) and all(i.isalpha() for i in odam[0].split()):
        return odam[0]
    return None

def tsana(odam):
    if isinstance(odam[1], str) and len(odam[1].split('.')) == 3:
        return odam[1]
    return None

def maow(odam):
    if isinstance(odam[2], int):
        return odam[2]
    return None
    
malu = [("Jamshidbek Salahiddinov","01.01.2001",20000000),
       ("Mahmud Tursunov",        "02.02.2000",25000000),
       ("Abror Akbarov",          "01.01.2002",30000000),
       ("Sardor Akbarov",         "01.01.2005",35000000),
       ("Abdulloh Fazliddinov",   "10.10.2007",50000000)
       ]

ismfam = list(filter(None, map(ism, malu)))
sana = list(filter(None, map(tsana, malu)))
maosh = list(filter(None, map(maow, malu)))

print("\t\tIsmlar va familiyalar\n", ismfam)
print("\t\tTug'ilgan sanalar\n", sana)
print("\t\tMaoshlar\n", maosh)