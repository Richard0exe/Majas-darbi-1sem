#/// Uzdevums_B.cpp
#/*****************************************************************
# Izveidot programmu gan C++, gan Python, obligāti izmantojot norādītās
# vai kādas citas funkcijas. Prasības tādas pašas kā iepriekšējā uzdevumā,
# precīzāk sk. Laboratorijas darbu noteikumos.
# B26. Dots naturāls skaitlis n. Noskaidrot, vai doto skaitli var izteikt kā trīs naturālu
# skaitļu kvadrātu summu. Izdrukāt visus  šādus naturālu skaitļu trijniekus.
# Risinājumā izmantot funkciju, kas aprēķina trīs skaitļu kvadrātu summu.
#*****************************************************************/
# Autors: Ričards Bubišs, rb22033
# Izveidota: 25.10.2022
#**********************************************
# int summa (int i, int j, int k)
# Funkcija summa(i,j,k) -
# atgriež skaitļu i,j un k kvadrātu summu.
#**********************************************
while True:
    def summa(i,j,k):
        summ = i**2+j**2+k**2                          #Funkcija, kas aprēķina skaitļu kvadrātu summu
        return summ
    
    n = int(input("Ievadiet naturālu skaitli: "))
    while n<1:
        n = int(input("Atļauts ievadīt tikai NATURĀLU skaitli (n>=1): "))   #Nodrošina pareizu skaitļu ievadi, pieņemu ka mazākais naturālais ir 1
        
    rez = 0                                           #Mainīgais, kurš maina vērtību, ja eksistē kaut viens skaitļu trijnieks, kuru skaitļu kvadrātu summa veido n
   
    for i in range(1,n+1):
    
        for j in range(1,n+1):                       #Cikls, kurš nodrošina, ka tiek atrasti 3 skaitļi, kuru kvadrātu summa vienāda ar n
        
            for k in range(1,n+1):
            
                if summa(i,j,k)==n:
                    rez+=1
                    print(i," ",j," ",k)
                
    if rez<1:
        print("Nevar izteikt kā trīs naturālu skaitļu kvadrātu summu!")           #Nodrošina, ka tiek paziņots, ja neeksistē tāda skaitļu trijnieka, kuru kvadrātu summa vienāda ar n
       
    ok = int(input("Vēlaties turpināt(1) vai beigt(0)?: "))
    if ok !=1:
        break


#/******************* Testu plāns ******************************************************************
#   n                                     trijnieki
#
#   0                                    Atļauts ievadīt tikai naturālu skaitli
#  -1                                    Atļauts ievadīt tikai naturālu skaitli
#   1                                    Nevar izteikt kā trīs naturālu skaitļu kvadrātu summu
#    
#   26                                    1 3 4
#                                         1 4 3
#                                         3 1 4
#                                         3 4 1
#                                         4 1 3
#                                         4 3 1
#    
#   3                                     1 1 1
#***************************************************************************************************/
