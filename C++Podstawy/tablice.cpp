#include <iostream>
using namespace std;

void wypisz_tablice(int tablica[], int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
        cout << tablica[i] << ", ";
    }

}

int main(){
    char tekst[] = "asdfg";

    tekst[0] = 'a';

    cout << tekst[1] << endl;
    cout << *(tekst+3);

    int tablice[5][3] = {
        {3,4,5},
        {3,4,6},
        {4,7,5},
        {3,4,6},
        {4,7,5}
        };

    for(int i = 0; i < 5; i++){
        cout << endl;
        for (int j = 0; j < 3 ; j++){
            cout << tablice[i][j] << " ";
        }
    }
    cout << endl;
    int tablica[] = {4,5,6,7};
    int size=sizeof tablica/sizeof(int);

    wypisz_tablice(tablica, size);

    return 0;
}
