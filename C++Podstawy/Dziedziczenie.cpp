#include <iostream>

using namespace std;

class Figura{
protected:
    int wysokosc, szerokosc;
public:
    void ustaw_wartosc(int a, int b)
    {
        wysokosc = a;
        szerokosc = b;
    }
    virtual int pole() = 0;

};
class Prostokat : public Figura { // klasa figura jest klasa bazowa dla klasy prostokat
public:
    int pole(){
         return wysokosc * szerokosc;
    }
};

class Trojkat : public Figura {
public:
    int pole(){
         return wysokosc * szerokosc / 2;
    }
};
int main(){
    Trojkat tr;
    Prostokat pr;
    // Figura fig; // nie mozna tworzyć

    Figura *pfig1 = &pr;
    Figura *pfig2 = &tr;

    pfig1->ustaw_wartosc(10,19);
    pfig2->ustaw_wartosc(5,19);

    pfig1->pole();
    pfig2->pole();

    tr.ustaw_wartosc(3,4);
    pr.ustaw_wartosc(5,6);

    cout << tr.pole() << endl;
    cout << pr.pole() << endl;
return 0;
}
