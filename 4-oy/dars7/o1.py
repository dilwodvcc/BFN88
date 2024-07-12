from os import system
system("cls")

ism = input("Ismizni kiriting : ")
fam = input("familiyazni kiriting : ")
yow = input("yoshizni kiriting : ")
boy = input("bo'yizni kiriting : ")
mil = input("millatizni kiriting : ")
vaz = input("vaznizni kiriting : ")
dct = [ism,fam,yow,boy,mil,vaz]
with open("odam.txt","w") as file:    
    file.write(f"""
Mening   ismim      :  {ism}
Mening   familiyam  :  {fam}
Mening   yoshim     :  {yow}
Mening   bo'yim     :  {boy}
Mening   millatim   :  {mil}
Mening   vaznim     :  {vaz}
""")
file.close()