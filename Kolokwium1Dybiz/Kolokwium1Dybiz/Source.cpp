#include <iostream>
#include "Student.h"
#include "A.h"
#include "Zbior.h"

int main()
{
    using namespace std; 
    /*Student *s = new A();

    s->show();

    char v = (*s)[1];

    cout << v << endl;

    (*s) = 12.2;

    s->show();*/

    Zbior<int> zb;
    zb.dodaj(0 ,12);
    zb.dodaj(1 ,23);
    int suma = zb.suma();

    system("pause");
    return 0;
}