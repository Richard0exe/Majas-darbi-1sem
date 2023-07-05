/*****************************************************************
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

******************************************************************/
///Autors: Ričards Bubišs
///Veidots: 04.12.2022

class Account
{
    float summa;
    float procentulikmeg;
public:
    Account(float summa=600, int procentulikmeg=10);      ///Konstruktors - ar kuru tiek padotas sakotnējās vērtības.
    ~Account();                                           ///Destruktors - kurš paziņo parobjekta likvidēšanu.

    void Deposit(int dep);
    void Withdraw(int withd);
    void changeInterestRate(float change);
    void Recalculate(int days);
    void print();
};
