#include <iostream>
#include <cstring>

using namespace std;

char * getname()
{
    char temp[80]; // tymczasowy bufor
    cout << "Podaj nazwisko: ";
    cin >> temp;
    char *pn = new char[strlen(temp) + 1];

    strcpy(pn,temp);
    // kopiowanie lancucha do krotszej tablicy

    return pn;
    // po zakonczeniu funkcji temp zostanie utracone
}

int main()
{
    char *name;
    // utworzenie wskaznika bez prypisanej pamieci

    name = getname();
    // przypisanie zmiennej do adresu lancucha

    cout << name << " pod adresem " << (int *) name << "\n";
    delete [] name; // zwolnienie pamieci

    name = getname(); // ponowne uzycie zwolnionej pamieci
    cout << name << "pod adresem " << (int *) name << "\n";
    delete [] name; // ponowne zwolnienie pamieci
    return 0;
    // alokowanie dynamiczne
}
