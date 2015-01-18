#include <iostream>
#include "przyjaciele.h"
using namespace std;

Punkt::Punkt(string n, float xx,float yy){
 nazwa = n;
 x=xx;
 y=yy;

}

void Punkt::wczytaj(){
   cout << "Podaj x "; cin >> x;
   cout << "Podaj y "; cin >> y;
   cout << "Nazwa punktu"; cin >> nazwa;
}

Prostokat::Prostokat(string n, float xx, float yy,float s, float w)
{
    nazwa = n;
    x = xx;
    y = yy;
    wysokosc = w;
    szerokosc = s;

}

void Prostokat::wczytaj(){
   cout << "Podaj x "; cin >> x;
   cout << "Podaj y "; cin >> y;
   cout << "Podaj szerokosc "; cin >> szerokosc;
   cout << "Podaj wysokosc "; cin >> wysokosc;
   cout << "Nazwa prostokata"; cin >> nazwa;
}
