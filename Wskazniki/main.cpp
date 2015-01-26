#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>
using namespace std;

//clock_t start, stop;

\

int main()
{
    int liczba = 144;
    int *w_liczba;
    w_liczba = &liczba;

    cout << w_liczba;
    cout << endl << *w_liczba;








    int ile;
    double czas;
    cout << endl << "ile liczb w tablicy ";
    cin >> ile;

    int *tablica;
    tablica = new int[ile];
   // start = clock();
    for(int i = 0; i < ile ; i++){
        tablica[i]+= i;
       // cout << (int) tablica << endl;
        tablica++;
    }
  //  stop = clock();
    czas = 0;
  //  czas = (double)(stop - start) / CLOCKS_PER_SEC;

    delete [] tablica;

    return 0;
}
