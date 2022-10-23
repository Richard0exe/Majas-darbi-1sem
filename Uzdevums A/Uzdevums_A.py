# Uzdevums_A.py
#*********************************************************************************
# A26. A26. Doti trīs pozitīvi skaitļi. Noteikt, 
# vai eksistē trijstūris ar šādiem malu garumiem un vai tas ir šaurlenķa.
#*********************************************************************************
# Autors: Ričards Bubišs, rb22033
# Izveidots: 23.09.2022;

while True:
    x = 0
    while x!=1:
        a = int(input("Pirmā mala: "))
        b = int(input("Otrā mala: "))
        c = int(input("Trešā mala: ")) 
        if a<0 or b<0 or c<0:
            x=0
            print("Tikai pozitīvi skaitļi")
        elif a<b+c and b<a+c and c<a+b:
            x=1
            print("Eksistē")
        else:
            print("Neeksistē")
            
   #Atrod garāko malu un nosaka vai trijstūris ir šaurleņķa         
            
    if a>=b and a>=c:
        lma = a
        if lma*lma<(b*b+c*c):
            print("Šaurleņķa")
        else:
            print("Nav šaurleņķa")
            
    elif b>=a and b>=c:
        lmb = b
        if lmb*lmb<(a*a+c*c):
            print("Šaurleņķa")
        else:
            print("Nav šaurleņķa")
    else:
        lmc = c
        if lmc*lmc<(a*a+b*b):
            print("Šaurleņķa")
        else:
            print("Nav šaurleņķa")
 
    ok = int(input("Vai turpināt (1) vai beigt (0)?"))        
    if ok !=1:
        break
    
#******************* Testu plāns ********************************
#  malu garumi                        paredzamais rezultāts
#
#     2 5 7                                Neeksistē
#
#    -3 5 7                                Tikai pozitīvi skaitļi
#
#    -2 -5 -7                              Tikai pozitīvi skaitļi
#
#     5 5 5                                Eksistē
#                                          Šaurleņķa
#
#     3 4 5                                Eksistē
#                                          Nav šaurleņķa
#***************************************************************   



