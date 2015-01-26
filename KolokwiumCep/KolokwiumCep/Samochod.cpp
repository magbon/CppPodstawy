#include "Samochod.h"
#include <iostream>

Samochod::Samochod(std::string nazwa ,int przebieg ,double cena)
{
    this->nazwa = nazwa;
    this->przebieg = przebieg;
    this->cena = cena;
    this->dodano_obiekt();

}

Samochod::Samochod(int przebieg)
{
    this->nazwa = "";
    this->przebieg = przebieg;
    this->cena = 0;
    this->dodano_obiekt();
}


Samochod::~Samochod()
{
}

void Samochod::show()
{
    using namespace std;

    cout << this->nazwa << " ma przebieg " << this->przebieg << " i kosztuje " << this->cena << endl;
}