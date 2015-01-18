#include <iostream>
using namespace std;

struct Buty{
    int rok;
    int rozmiar;
};
int main(){

    Buty convers = {2010, 40};
    Buty *p_buty = &convers;

    // Jesli identyfikator struktury to jej nazwa, używamy
    // kropki. Jeśli indentyfikator struktury jast wskaznikiem
    // używamy strzałki.
    cout << p_buty->rok; // 2010
    cout << convers.rok; // 2010

    Buty *p_s = new Buty;

    return 0;
}
