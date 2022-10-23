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
int summa(int i, int j, int k){
     int sum;
     //funkcija kas aprēķina skaitļu kvadrātu summu
    sum = i*i+j*j+k*k;
    return sum;


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

int rez=0;

  for(int i=1; i*i<=n;i++){
        for(int j=1;j*j<=n;j++){
            for(int k=1;k*k<=n;k++){
                    if (summa(i,j,k) == n){
                        rez++;
                        cout<<i<<" "<<j<<" "<<k<<endl;
                    }
            }
        }
  }
if (rez<1){
    cout<<"Nevar izteikt kā trīs naturālu skaitļu kvadrātu summu!"<<endl;
}


cout<<"Vēlaties turpināt(1) vai beigt(0)?"<<endl;
    cin>>ok;
}while(ok==1);

}




















