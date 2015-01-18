#include <iostream>

using namespace std;

int main(){


    int liczba;
    unsigned int ilosc_liczb = 0;

    cout << "Podaj liczbe do podzialu" << endl;
    cin >> liczba;


    int liczba2 = liczba;
    do{
        ++ilosc_liczb;
        liczba2 /= 10;

    }while(liczba2);

    cout << ilosc_liczb << endl;

    int tab[ilosc_liczb];
    int i;
    int sum = 0;
    for(i = 0 ; i < ilosc_liczb ; i++){
        tab[i] = liczba % 10;
        sum += tab [i];
        liczba /= 10;
        cout << tab[i] << " ";
    }

    cout << endl << "Suma " << sum;


    return 0;

}
