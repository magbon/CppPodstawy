#include <iostream>

using namespace std;

class Piesio
{
private:
    string imie;
    string kolor;
    int wiek;
public:
    // zostanie wywolany przy tworzeniu obiektu
    Piesio(string i ,string k, int w)
    : imie(i), kolor(k), wiek(w)
    {
        //imie = i;
        //kolor = k;
        //wiek = w;
    }
    Piesio()
    : imie(""), kolor(""), wiek(0)
    {
    }

    // nie jest to zbyt dobre
    void ustaw(string i , string k ,int w)
    {
        imie = i;
        kolor = k;
        wiek = w;
    }
    void wypisz()
    {
        cout << imie << " " << kolor << " " << wiek << endl;
    }

    ~Piesio() {
        cout << "\nDestruktor" << endl;
    }
};

int main()
{
     Piesio Hachiko("Hachiko", "zolty",10);
     Hachiko.wypisz();
     Piesio Hans;
     Hans.ustaw("Hans","czarny",5);
     Hans.wypisz();
  /*  Piesio Belcia; // niezbyt dobre
    Piesio Tina;
    Belcia.ustaw("Bela","bialy",5);
    Tina.ustaw("Tina","brazowy",10);
    Belcia.wypisz();
*/
    string plik_tekstowy[100]="sdds";
    cout << plik_tekstowy[10].size();
    return 0;
}
