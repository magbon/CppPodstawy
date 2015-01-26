#include <iostream>
#include "event.h"
using namespace std;

int main()
{
   // Event w1("Apokalipsa zombie",6,8,2045,8,15);
    //Event w1;
    Event w1("Apokalipsa zombie"); // brakujace zostana zastapione domyslnymi
    w1.show();

   // Event a = Event();
    // Event a = new Event(4); konwersja blad
    Event a(4); // ok
    //  Event a; // redeklaracja
    return 0;
}
