/// Uzdevums_A.cpp
/****************************************************************************
A26. Doti trīs pozitīvi skaitļi. Noteikt,
vai eksistē trijstūris ar šādiem malu garumiem un vai tas ir šaurlenķa.
*****************************************************************************/
/// Autors: Ričards Bubišs, rb22033
/// Izveidots: 22.09.2022

#include <iostream>
using namespace std;

int main()
{
    int ok;
    int x=0;
    int a,b,c;
    do
    {
    do{
        cout << "Ievadiet 3 pozitīvus skaitļus (malu garumus): "<<endl;
        cin >> a >> b >> c;
        if (a<=0 or b<=0 or c<=0){
            x=0;
            cout<<"Tikai pozitīvi skaitļi"<<endl;
        }
        else if(a<b+c && b<a+c && c<a+b){
          x=1;
          cout<<"Eksistē"<<endl;
        }
        else cout<<"Neeksistē"<<endl;
    } while (x!=1);

   ///Atrod garāko malu un nosaka vai trijstūris ir šaurleņķa
    int lma, lmb,lmc;
    if (a>=b && a>=c){
            lma = a;
            if (lma*lma<(b*b+c*c)) cout<< "Šaurleņķa"<<endl;
            else cout<<"Nav šaurleņķa"<<endl;
    }
    else if (b>=a && b>=c){
            lmb = b;
            if (lmb*lmb<(a*a+c*c)) cout<<"Šaurleņķa"<<endl;
            else cout<<"Nav šaurleņķa"<<endl;
    }
    else{
            lmc = c;
        if (lmc*lmc<(a*a+b*b)) cout<<"Šaurleņķa"<< endl;
        else cout<<"Nav šaurleņķa"<<endl;
    }

    cout << "Vai vēlaties turpināt(1) vai beigt(0)"<<endl;
     cin >> ok;
    } while (ok==1);
}

/******************* Testu plāns ****************************
   malu garumi                        paredzamais rezultāts

      2 5 7                                Neeksistē

     -3 5 7                                Tikai pozitīvi skaitļi

     -2 -5 -7                              Tikai pozitīvi skaitļi

      5 5 5                                Eksistē
                                           Šaurleņķa

      3 4 5                                Eksistē
                                           Nav šaurleņķa
************************************************************/


















