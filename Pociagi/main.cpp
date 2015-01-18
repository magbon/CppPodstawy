#include <iostream>

using namespace std;

class Pociag
{
public:

    string rodzaj;
    string nazwa;
    int rocznik;
    int najdluzsza_trasa;

    void wczytaj_pociag(){
        cout << "Wczytanie pociagow" << endl;
        cout << "rodzaj pociagu: ";
        cin  >> rodzaj;
        cout << "nazwa pociagu: ";
        cin >> nazwa;
        cout << "Rok wprowadzenia na tory: ";
        cin >> rocznik;
        cout << "Najdluzsza trasa [km]:";
        cin >> najdluzsza_trasa;
    }

    void wypisz_pociag(){
         cout << "rodzaj pociagu: ";
        cout << rodzaj;
        cout << "nazwa pociagu: ";
        cout << nazwa;
        cout << "Rok wprowadzenia na tory: ";
        cout << rocznik;
        cout << "Najdluzsza trasa [km]:";
        cout << najdluzsza_trasa;
    }
};

int main()
{
   Pociag p1;
   p1.wczytaj_pociag();

   Pociag p2;
   p2.wypisz_pociag();
    return 0;
}
