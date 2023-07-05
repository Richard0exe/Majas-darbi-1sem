/// Uzdevums_C.cpp
/*****************************************************************
C22. Dots naturāls skaitlis n. Atrast un izdrukāt ciparu, kurš dotā skaitļa pierakstā sastopams visbiežāk.
Ja tādi ir vairāki, izdrukāt lielāko. Skaitļa dalīšana ciparos jāveic skaitliski.
*****************************************************************/
/// Autors: Ričards Bubišs, rb22033
/// Izveidota: 13.11.2022

#include <iostream>
using namespace std;
/***************************************************
int visbiezakais (int *mas, int gar);
Funkcija visbiezakais(mas, gar) -
atgriež visbiežāk atkārtojamo ciparu skaitlī n. Ja tādi cipari ir vairāki atgriež lielāko.
***************************************************/
int visbiezakais (int *mas, int gar){
int reize;
int maks=0;
int elem;
    for(int i=0;i<gar;++i){
        reize=0;
        for(int j=0;j<gar;++j){
            if (mas[i]==mas[j]) reize++;
        }
        if (reize>maks){
            maks = reize;
            elem = mas[i];
        }
        else if(maks == reize){
            elem = max(elem, mas[i]);                           ///ja vairāki cipari skaitļa pierakstā parādās vairākas reizes, atgriež lielāko.
        }
    }
return elem;
}


int main(){
int ok;
int *mas;
do{
int reize;
int n, n1, n2;         ///lietotāja ievadītais n skaitlis.
int gar=0;

do{
cout<<"Ievadiet naturālu skaitli n: "<<endl;
cin>>n;
if(n<1) cout<<"Nekorekta vērtība! Skaitlim jābut naturālam!"<<endl;
}while(n<1);
n1=n;
n2=n;
while(n1>0){           ///atrod kādam jābūt masīva garumam.
    gar++;
    n1/=10;
}

mas = new int [gar];           ///dinamiskais masīvs mas ar garumu gar.


for(int i=0;i<gar;++i){     ///ieraksta skaitļa n ciparus dinamiskajā masīvā.
    mas[i] = n2%10;
    n2/=10;
}
 cout<<"Visbiežākais un vislielākais cipars skaitļa n pierakstā: "<<visbiezakais(mas, gar)<<endl;

cout<<"Vai vēlaties turpināt(1), vai beigt(0): "<<endl;
cin>>ok;


delete[] mas;
}while(ok==1);
return 0;}


/******************* Testu plāns ******************************************************************

            Skaitlis n                              Visbiežākais cipars skaitļa pierakstā

            424287424                                            4

            133311                                               3

            555555                                               5

            12345                                                5
***************************************************************************************************/
