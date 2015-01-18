#include <iostream>

using namespace std;
int main(){

    int updates = 6;
    int *p_updates; // p jak pointer

    p_updates = &updates;

    cout << "Wartosci updates = " << updates << endl;
    cout << ", p_updates = " << p_updates << endl;
    cout << ", *p_updates = " << *p_updates << endl; // *pointer == zmienna
    cout << " &updates" << &updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Teraz updates to " << updates << endl;

    int zmienna = 4;
    int *p_zmienna = &zmienna;
    *p_updates = *p_zmienna; // zmieniam adres zmiennej updates na zmianna
    // *p_updates = &p_zmienna; // blad & + zmienna wskaznikowa zamiast & + zwykla zmienna
    cout << ", updates = " << updates << endl; // 4

    int * p_t;
    p_t = ( int *) 0xB8000000; // typy są zgodne

    // alokacja pamieci
    // uzywany do tablic, struktur i lancuchow
    int *p_n = new int;
    *p_n = 1001;

    cout << "Wartosc : "  <<  *p_n << " Polozenie : " <<  p_n << endl;

    double *p_d = new double;
    *p_d = 10000001.1;

    cout << "wielkosc polozenia p_n : " << sizeof(p_n) << endl;
    cout << "wielkosc polozenia p_d : " << sizeof(p_d) << endl;

    // zwalnianie pamieci
    // sam wskaznik nie jest usuwany
    int *p_s = new int;
    int *p_q = p_s; // nie trzeba uzyc tego samego wskaznika
    // aletrzeba uzyc tego samego adresu
    delete p_q;

    return 0;
}
