#include <iostream>

using namespace std;

struct punkt2D
{
    int x,y;
}a1,a2; // rownowazne punkt2D abc;

punkt2D funkcja(){
    punkt2D temp;
    temp.x = 6;
    temp.y = 3;

    return temp;
}
punkt2D tablica[] = {1,3,4,5};

union abc{ // jak wrzucimy cos do a to automatycznie czesc info bedzie tez w b
    long a;
    short b;
};

enum kolor { // mozna tez zmienic numeracje zielony = 4
    zielony,
    niebieski,
    czerwony
};

void wypisz_kolor(kolor a){
     switch(a){
     case zielony: cout << "Zielony" << endl;
     break;
     case niebieski: cout << "Niebieski" << endl;
     break;
     case czerwony: cout << "Czerwony" << endl;
     break;
     }
}

int main(){

    wypisz_kolor(czerwony);
    cout << "Czerwony jest " << czerwony << " elementem typu wyliczeniowego kolor" << endl;
    abc def;
    def.a = 1;
    cout << def.b << endl;
    punkt2D *a1 = new punkt2D;
    // a1->x; // dziala tak samo jak kropka

    punkt2D abc;

    abc.x = 20;
    abc.y = 30;
    abc = funkcja();

    cout << abc.x << " " << abc.y << " "  << tablica[3].x<< endl;



    int roz = 5;

    double *p = new double[roz];

    for (int i = 0; i < roz; i++ )
    {
        p[i] = i + 1;
        cout << p[i] << ", ";
    }
}
