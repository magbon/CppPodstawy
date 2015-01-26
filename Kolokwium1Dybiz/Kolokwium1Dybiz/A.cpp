#include "A.h"
#include <iostream>

A::A() : Student("asd", 2.42, 53423)
{
    this->zm = new std::string("test");
}


A::~A()
{
    delete this->zm;
}

void A::show()
{
    Student::show();
    std::cout << *zm << std::endl;
}