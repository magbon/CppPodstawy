#include <iostream>
#include "Samochod.h"
#include "B.h"
#include "Kolejka.h"


int main()
{
    using namespace std;

    Samochod *s = new Samochod("samochod" ,123 ,23.43);

    /*string nazwa = (*s);

    (*s) += 2;

    s->show();*/

    //B *b = new B();

    Kolejka<int> k;

    k.dodaj(123);
    k.dodaj(124);

    cout << k.podaj_srednia();

    system("pause");
    return 0;
}