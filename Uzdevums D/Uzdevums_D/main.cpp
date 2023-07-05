/*************************************************************************************************************************************************
D5. Izveidot klasi "Bankas konts" - Account, kurā tiek glabāti divi skaitļi - summa un procentu likme gadā.
Klasei izveidot šādas metodes: (1) konstruktors, ar kuru tiek padotas sākotnējās vērtības, (2) destruktors,
kurš paziņo par objekta likvidēšanu, (3) metode "Papildināt kontu" - deposit, kas papildina kontu ar noteiktu summu,
(4) metode "Izņemt naudu" - withdraw, kas samazina konta atlikumu, (5) metode "Mainīt procentus" - changeInterestRate, kas uzstāda jauno procentu likmi,
(6) metode "Pārrēķināt summu" - recalculate ar uzrādītu periodu dienās,
kas izrēķina ienākumu no procentiem noteiktā laika periodā un papildina kontu ar šo summu (tiek uzskatīts, ka visos mēnešos ir pa 30 dienām),
(4) metode "Drukāt" - print, kas izdrukā konta atlikumu.
**************************************************************************************************************************************************/
///Autors: Ričards Bubišs
///Veidots: 04.12.2022

#include "program.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    Account B;

    B.print();           ///600
    B.Deposit(50);       ///650
    B.print();           ///650
    B.Recalculate(60);   /// 650+10.83
    B.print();           ///660.83
    B.Withdraw(400);     ///260.83
    B.print();           ///260.83
    B.changeInterestRate(100);
    B.Recalculate(60);   /// 260.83+43.47
    B.print();           ///304.3
    B.changeInterestRate(4.7);
    B.Recalculate(60); ///304.3+2.38
    B.print();    ///306.68
}


