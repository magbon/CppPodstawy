#pragma once
#include "Samochod.h"
#include <string>

class A : public Samochod
{
    public:
    A();
    virtual ~A();

    private:
    std::string* dowolnePole;
};

