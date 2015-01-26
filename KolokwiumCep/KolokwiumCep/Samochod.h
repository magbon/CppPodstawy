#pragma once


#include <string>

class Samochod
{
    public:
    Samochod(int przebieg);
    Samochod(std::string nazwa, int przebieg, double cena);
    virtual ~Samochod();
    void show();

    int utworzonych_obiektow()
    {
        return ilosc_obiektow;
    }

    operator std::string() const
    {
        return this->nazwa;
    }

    void operator+=(int p)
    {
        this->przebieg = this->przebieg + p;
    }

    private:
    static int ilosc_obiektow;
    std::string nazwa;
    int przebieg;
    double cena;

    inline void dodano_obiekt()
    {
        Samochod::ilosc_obiektow++;
    }
};

