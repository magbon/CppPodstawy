#include <iostream>

using namespace std;

float srednia(float *tab, int ile){
    float suma = 0;

    for(int i = 0; i < ile ;i++)
    {

        suma += *tab;
        *tab = 999;
        tab++;
    }

    return suma / ile;
}


int main()
{
    float tablica[3];

    tablica[0] = 6.7;
    tablica[1] = 3.5;
    tablica[2] = 4.5;

    cout << "Srednia wynosi: " << srednia(tablica,3);
    return 0;
}
