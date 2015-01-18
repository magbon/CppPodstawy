#include <iostream>
using namespace std;

int main(){

    // Jesli pamiec alokowalismy za pomoca new [ ] , zwalniamy ja przez delete [ ].
    // obecnosc nawiasow wskazuje, ze trzeba zwolnic cala tablice
    int *p_some = new int[10]; // pobranie bloku na 10 liczb int
    delete []p_some; // zwalnianie tablicy dynamicznej


    return 0;
}
