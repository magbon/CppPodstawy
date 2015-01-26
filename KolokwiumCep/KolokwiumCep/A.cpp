#include "A.h"


A::A() : Samochod(11)
{
    this->dowolnePole = new std::string();
}


A::~A()
{
    delete this->dowolnePole;
}
