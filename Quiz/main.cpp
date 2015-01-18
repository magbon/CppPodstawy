#include <iostream>
#include "pytanie.h"
using namespace std;

int main()
{
    /*Pytanie p1;
    p1.nr_pytania = 1;
    p1.wczytaj();
    p1.zadaj();
    p1.sprawdz();
    */

    Pytanie p[5];
    int suma = 0;

    for(int i = 0; i < 5; i++)
    {
        p[i].nr_pytania = i + 1;
        p[i].wczytaj();
        p[i].zadaj();
        p[i].sprawdz();
        suma += p[i].punkt;
    }

    cout << "KONIEC QUIZU! PUNKTY = " << suma;
    return 0;
}
