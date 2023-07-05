/// Uzdevums_B.cpp
/*****************************************************************
Izveidot programmu gan C++, gan Python, obligāti izmantojot norādītās
vai kādas citas funkcijas. Prasības tādas pašas kā iepriekšējā uzdevumā,
precīzāk sk. Laboratorijas darbu noteikumos.
B26. Dots naturāls skaitlis n. Noskaidrot, vai doto skaitli var izteikt kā trīs naturālu
skaitļu kvadrātu summu. Izdrukāt visus  šādus naturālu skaitļu trijniekus.
Risinājumā izmantot funkciju, kas aprēķina trīs skaitļu kvadrātu summu.
*****************************************************************/
/// Autors: Ričards Bubišs, rb22033
/// Izveidota: 25.10.2022
#include <iostream>
using namespace std;
/***************************************************
int summa (int i, int j, int k);
Funkcija summa(i,j,k) -
atgriež i,j un k skaitļu kvadrātu summu.
***************************************************/
int summa(int i, int j, int k){
     int sum;
    sum = i*i+j*j+k*k;            ///funkcija kas aprēķina skaitļu kvadrātu summu
    return sum;


                }

int main(){
int n;
int ok;
do{
do{
///skaitļa pārbaude, vai ir naturāls skaitlis, pieņemu, ka mazākais naturālais skaitlis 1
cout<<"Ievadiet naturālu skaitli: "<<endl;
cin>>n;
if (n<1) cout<<"Atļauts ievadīt tikai NATURĀLU skaitli (n>=1) "<<endl;
}while (n<1);

///mainīgais kurš maina savu vērtību, ja eksistē kaut viens skaitļu trijnieks kuru kvadrātu summa vienāda ar n
int rez=0;

///Nodrošina, ka atrod 3 skaitļus, kuru kvadrātu summa veido skaitli n
  for(int i=1; i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                    if (summa(i,j,k) == n){            ///izsaucam funkciju pārbaudei
                        rez++;
                        cout<<i<<" "<<j<<" "<<k<<endl;
                    }
            }
        }
  }
///Nodrošina, ka tiek paziņots, ja skaitļu summa neveido skaitli n
if (rez<1){
    cout<<"Nevar izteikt kā trīs naturālu skaitļu kvadrātu summu!"<<endl;
}


cout<<"Vēlaties turpināt(1) vai beigt(0)?"<<endl;
    cin>>ok;
}while(ok==1);

}

/******************* Testu plāns ******************************************************************
    n                                     trijnieki

    0                                     Atļauts ievadīt tikai naturālu skaitli
    -1                                    Atļauts ievadīt tikai naturālu skaitli
    1                                     Nevar izteikt kā trīs naturālu skaitļu kvadrātu summu

    26                                    1 3 4
                                          1 4 3
                                          3 1 4
                                          3 4 1
                                          4 1 3
                                          4 3 1

    3                                     1 1 1
***************************************************************************************************/
