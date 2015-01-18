#include <iostream>
#include <fstream>

using namespace std;

int main(){
    long poczatek, koniec;

    fstream mojplik("abc.txt");
    poczatek = mojplik.tellg();
    mojplik.seekg(0, ios::end);
    koniec = mojplik.tellg();

    mojplik.close();

    // rozmiar pliku w bajtach
    cout << koniec - poczatek << endl;
    return 0;
}
