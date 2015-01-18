#include <iostream>
#include "pytanie.h"
#include <fstream>
#include <algorithm>



using namespace std;

void Pytanie::wczytaj() // metoda bedaca czescia klasy pytanie
{
    fstream plik;
    plik.open("quiz.txt",ios::in);

    if(plik.good() == false)
    {
        cout << "Nie udalo sie otworzyc pliku";

    }

    int nr_lini = (nr_pytania - 1) * 6 + 1;
    int aktualny_nr = 1;
    string linia;

    while(getline(plik,linia)){

        if(aktualny_nr == nr_lini) tresc = linia;
        if(aktualny_nr == nr_lini + 1) a = linia;
        if(aktualny_nr == nr_lini + 2) b = linia;
        if(aktualny_nr == nr_lini + 3) c = linia;
        if(aktualny_nr == nr_lini + 4) d = linia;
        if(aktualny_nr == nr_lini + 5) poprawna = linia;

        aktualny_nr++;

    }

    plik.close();
}

void Pytanie::zadaj(){
    cout << endl << tresc << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << endl << "Odpowiedz ";
    cin >> odpowiedz;
    transform(odpowiedz.begin(),odpowiedz.end(),odpowiedz.begin(),::toupper);
}

void Pytanie::sprawdz(){

  transform(poprawna.begin(),poprawna.end(),poprawna.begin(),::toupper);


  if( odpowiedz == poprawna){
    punkt = 1;
    cout << " Poprawnie";
  }
  else{
    punkt = 0;
    cout << " Blednie";
  }
}
