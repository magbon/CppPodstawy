#include <iostream>
#include <string>
using namespace std;

int main(){

    string imie;

    cout << "Podaj imie:  ";
    cin >> imie;

    int dlugosc_imienia = imie.length();

    // cout << imie.length() << endl;
    // cout << imie[dlugosc_imienia-1];

    char ostatnia_litera  = imie[dlugosc_imienia - 1];

    if(ostatnia_litera == 'a'){
        if(imie == "Kuba"){
            cout << "Podane imie jest meskie";
        }
        else{
            cout << "Podane imie jest zenskie";
        }
    }
    else{
         cout << "Podane imie jest meskie";
    }
}
