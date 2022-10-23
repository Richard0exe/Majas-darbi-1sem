/*****************************************************************
Izveidot programmu gan C++, gan Python, obligāti izmantojot norādītās
vai kādas citas funkcijas. Prasības tādas pašas kā iepriekšējā uzdevumā,
precīzāk sk. Laboratorijas darbu noteikumos.
B26. Dots naturāls skaitlis n. Noskaidrot, vai doto skaitli var izteikt kā trīs naturālu
skaitļu kvadrātu summu. Izdrukāt visus  šādus naturālu skaitļu trijniekus.
Risinājumā izmantot funkciju, kas aprēķina trīs skaitļu kvadrātu summu.
*****************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int summa(int n){
     //funkcija kas aprēķina skaitļu kvadrātu summu
     for(int i=1; i*i<=n;i++){        //šito izņemt un pie cikla apakša pielikt pārbaudi
        for(int j=1;j*j<=n;j++){
            for(int k=1;k*k<=n;k++){
                if (i*i+j*j+k*k==n){
                    return n;

                }
            }
        }
     }
}


int main(){
int n;
int ok;
do{
do{
cout<<"Ievadiet naturālu skaitli: "<<endl;
cin>>n;
if (n<1) cout<<"Atļauts ievadīt tikai NATURĀLU skaitli (n>=1) "<<endl;
}while (n<1); //Skaitļa pārbaude

while(summa(n)!=n){
    cout<<"Ievadīto skaitli nevar izteikt kā trīs naturālu skaitļu summu"<<endl;
    cout<<"Ievadiet citu naturāli skaitli:"<<endl;
    cin>>n;
}

  for(int i=1; i*i<=n;i++){
        for(int j=1;j*j<=n;j++){
            for(int k=1;k*k<=n;k++){
                    if (i*i+j*j+k*k == n){
                        cout<<i<<" "<<j<<" "<<k<<endl;
                    }
            }
        }
  }



cout<<"Vēlaties turpināt(1) vai beigt(0)?"<<endl;
    cin>>ok;
}while(ok==1);

}




















