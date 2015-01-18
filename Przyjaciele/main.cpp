#include <iostream>
#include "przyjaciele.h"
using namespace std;

void sedzia(Punkt pkt,Prostokat p){

    if((pkt.x >= p.x) && (pkt.x <= p.x + p.szerokosc)
      && (pkt.y >= p.y) &&  ( pkt.y <= p.y + p.wysokosc)){
       cout << endl << "Punkt " << pkt.nazwa << " nalezy do prostokata";
      }
      else
        cout << endl << "Punkt " << pkt.nazwa << " nie nalezy do prostokata";
}

int main()
{
    Punkt pkt1("A",3,1);
    //pkt1.wczytaj();

    Prostokat pro1("Prostokat",0,0,6,4);
    // pro.wczytaj();
    sedzia(pkt1,pro1);
    return 0;
}
