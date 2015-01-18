#include <iostream>

using namespace std;

void a1(int a){
    a = 5;
}
void a2(int *a){
    *a = 300;
}
void dodaj(int &ref){
    ref +=5;
}

int main(){
    // wskaznik na typ int moze tylko wskazywac na typ int
    // cout << "Lalla";
    int a = 5;
    int liczba = 100;
    a1(liczba);
    cout << liczba << endl;

    a2(&liczba);
    cout << liczba << endl;
    int *b = &a;
    *b = 10;
    cout << a << endl;

    int z = 400;
    int& ref = z;
    ref = 10; // obie musza miec taka sama wartosc
    z = 100;
    cout << z << " " << ref << endl;

    int *p = &z;

    *p = 10;
    cout << *p;
    cout << z << endl;

    int y = 56;
    dodaj(y);
    cout << "Dodawanie referencji w funckcji" << y << endl;


    return 0;
}
