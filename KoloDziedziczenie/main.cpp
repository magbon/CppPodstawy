#include <iostream>
#include <math.h>

using namespace std;

class Punkt
{
    float x,y;
    string nazwa;

public:
    void wyswietl(){
        cout << nazwa << "(" << x << "," << y << ")";

    }
    Punkt(string n = "S",float a = 0, float b = 0){
        nazwa = n;
        x = a;
        y = b;
    }
};

class Kolo:public Punkt // klasa kolo dziedziczy publicznie z klasy punkt
{
    protected:
    float r;
    string nazwa; // przesloniecie atrybutu nazwa

public:
    void wyswietl(){
        cout << "Kolo o nazwie: " << nazwa;
        cout << "Srodek kola" << endl;
        Punkt::wyswietl();
        cout << "Promien " << r << endl;
        cout << "Pole kola " << M_PI * r *r;

    }

    Kolo(string nk = "Kolko",string np = "S", float a = 0, float b = 1 , float pr = 1)
    :Punkt(np,a,b)
    {
        nazwa = nk;
        r = pr;

    }


};
class Kula: public Kolo
{
    string nazwa;

    public:
     void wyswietl(){
        cout << "Kula o nazwie: " << nazwa;
        cout << "Srodek kola" << endl;
        Punkt::wyswietl();
        cout << "Promien " << r << endl;
        cout << "Objetosc kuli " << 4/3 * M_PI * r *r * r;

    }

    Kula(string nk = "Kolko",string np = "S",string nkul = "Kuleczka", float a = 2, float b = 3 , float pr = 3)
    :Kolo(nk,np,a,b,pr)
    {
      nazwa = nkul;
    }

};
int main()
{
    Kolo k1; // w wywolaniach nic sie nie zmienia
    k1.wyswietl();
    Kula k2;
    k2.wyswietl();
    cout << "Hello world!" << endl;
    return 0;
}

