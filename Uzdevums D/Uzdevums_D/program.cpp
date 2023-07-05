/******************************************************
Klase "BankasKonts" - Account, kurā tiek glabāti divi skaitļi
- summa un procentu likme gadā.

Jārealizē metodes:
(1) konstruktors, ar kuru tiek padotas sākotnējās vērtības,
(2) destruktors, kurš paziņo par objekta likvidēšanu,
(3) metode "Papildināt kontu" - deposit, kas papildina kontu ar noteiktu summu,
(4) metode "Izņemt naudu" - withdraw, kas samazina konta atlikumu,
(5) metode "Mainīt procentus" - changeInterestRate, kas uzstāda jauno procentu likmi,
(6) metode "Pārrēķināt summu" - recalculate ar uzrādītu periodu dienās, kas izrēķina ienākumu no procentiem
noteiktā laika periodā un papildina kontu ar šo summu (tiek uzskatīts, ka visos mēnešos ir pa 30 dienām),
(7) metode "Drukāt" - print, kas izdrukā konta atlikumu.

*******************************************************/
///Autors: Ričards Bubišs
///Veidots: 04.12.2022

#include "program.h"
#include <iostream>
#include <cmath>
using namespace std;
/*****************************************************
Konstruktors - Account::Account(float summa, int procentulikmeg)
tiek padotas sakotnējās vērtības.
******************************************************/
Account::Account(float summa, int procentulikmeg)
{
    if (summa<0){
        summa=0;
    }
    if (procentulikmeg<0){
        procentulikmeg=30;
    }
    this->summa=summa;
    this->procentulikmeg=procentulikmeg;


}
/*****************************************************
Destruktors - Account::~Account()
Paziņo par objekta likvidēšanu.
******************************************************/
Account::~Account()
{
    cout<<"Likvidēts objekts ar adresi "<<this<<endl;
}
/*****************************************************
void Account::Deposit(int dep);
Metode Account::Deposit(dep) - papildina summa ar vērtību dep.
******************************************************/
void Account::Deposit(int dep)
{
 if (dep<=0){
    cout<<"Papildināt nedrīkst"<<endl;
 }
 else summa+=dep;
}
/*******************************************************
void Account::Withdraw(int withd);
Metode Account::Withdraw(withd) - samazina summa par vērtību withd.
********************************************************/
void Account::Withdraw(int withd)
{
 if (withd>summa){
    cout<<"Nepietiek līdzekļu"<<endl;
 }
 else summa-=withd;
}
/******************************************************
void Account::changeInterestRate(int change);
Metode Account::changeInterestRate(change) - piešķir skaitlim procentulikmeg vērtību change.
*******************************************************/
void Account::changeInterestRate(float change)
{
if (change<=0){
    procentulikmeg=0;
}
 else procentulikmeg=change;
}
/******************************************************
void Account::Recalculate(int days)
Metode Account::Recalculate(days) - ar uzrādītu periodu dienās days, kas izrēķina ienākumu no procentiem.
*******************************************************/
void Account::Recalculate(int days)
{
 if(days<=0){
    days =1;
 }
 float ienakums= (summa*procentulikmeg*days/360)/100;              ///formula paņemta no bankas mājaslapas
 summa+=ienakums;
 summa = round(summa*100)/100;
}
/******************************************************
void Account::print();
Metode Account::print() - izdrukā summa vērtību.
*******************************************************/
void Account::print()
{
 cout<<"Konta atlikums: "<<summa <<endl;
}
