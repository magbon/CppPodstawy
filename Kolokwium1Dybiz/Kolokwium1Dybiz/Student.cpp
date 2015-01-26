#include "Student.h"
#include <iostream>


Student::Student(std::string nazwisko ,double srednia ,int numer_indeksu)
{
    this->nazwisko = nazwisko;
    this->srednia = srednia;
    this->numer_indeksu = numer_indeksu;
}


Student::~Student()
{
}

void Student::show()
{
    using namespace std;

    cout << nazwisko << ", " << numer_indeksu << " ma srednia " << srednia << endl;
}
