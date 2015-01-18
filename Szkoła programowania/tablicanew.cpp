#include <iostream>

using namespace std;

int main(){

    double *p_tab = new double[3]; // miejsce na 3 wartosci double
    p_tab[0] = 0.2;
    p_tab[1] = 0.5;
    p_tab[2] = 0.8;

    cout << "p_tab[1] to " << p_tab[1] << endl;
    p_tab = p_tab + 1;
    cout << "Teraz p_tab[0] to " << p_tab[0] <<" " << p_tab[1]<<" "<< p_tab[2] << endl;
    p_tab = p_tab - 1;
     cout << "Teraz p_tab[0] to " << p_tab[0] <<" " << p_tab[1]<< " "<<p_tab[2] << endl;
    delete [] p_tab; // usuwa pierwszy element tablicy
    cout << "Teraz p_tab[0] to " << p_tab[0] << " "<<p_tab[1]<<" " <<p_tab[2] << endl;

    return 0;
}
