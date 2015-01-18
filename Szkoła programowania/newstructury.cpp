#include <iostream>

using namespace std;

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable *ps = new inflatable;
    // alokacja pamieci na strukture
    cout << "Podaj nazwe dmuchanej zabawki: ";
    cin.get(ps->name, 20); // metoda 1. dostepu do pol
    cout << "Podaj objetosc w stopach szesciennych: ";
    cin >> (*ps).volume;   // metoda 2. dostepu do pol
    cout << "Podaj cene (zl): ";
    cin >> ps -> price;

    cout << "Nazwa: " << (*ps).name << endl;
    cout << "Objetosc: " << ps-> volume << " stop szesciennych\n";
    cout << "Cena: " << ps -> price << " zl" << endl;

    delete ps; // zwolnienie pamieci
    return 0;
}
