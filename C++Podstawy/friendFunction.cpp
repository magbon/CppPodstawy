#include <iostream>
using namespace std;

class Prostokat;

class Kwadrat {
private:
    int bok;
public:
    Kwadrat(int b)
    : bok(b)
    {

    }
    friend int pole (Kwadrat);
    friend class Prostokat;

};
int pole(Kwadrat a)
 {
    return a.bok * a.bok;
 }
class Prostokat {
private:
    int szerokosc,wysokosc;
public:
    Prostokat(int a, int b)
    : szerokosc(a), wysokosc(b)
    {

    }
    void konwertuj(Kwadrat a)
    {
        szerokosc = a.bok;
        wysokosc = a.bok;
    }
    void wypisz(){
        cout << szerokosc << " " << wysokosc << endl;
    }
};
int main(){
    Kwadrat kwadrat1(5);
    cout << pole(kwadrat1);
    Prostokat prost(3,4);
    prost.wypisz();
    prost.konwertuj(kwadrat1);
    prost.wypisz();
}
