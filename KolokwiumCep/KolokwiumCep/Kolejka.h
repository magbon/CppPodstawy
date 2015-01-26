#pragma once
#include <iostream>

template <class T>
class Kolejka
{
    public:

    Kolejka()
    {
        this->ile_obiektow = 0;

        for(int i = 0; i < 100; i++)
        {
            tab[i] = NULL;
        }
    }

    void dodaj(T wartosc)
    {
        if(ile_obiektow = 99) return;

        tab[ile_obiektow] = wartosc;
        ile_obiektow++;
    }

    void usun()
    {
        if(ile_obiektow = 0) return;

        tab[ile_obiektow] = NULL;
        ile_obiektow--;
    }

    private:
    int ile_obiektow;
    T tab[100];

};


template <>
class Kolejka < int >
{
    public:

    Kolejka()
    {
        for(int i = 0; i < 100; i++)
        {
            tab[i] = 0;
        }
        srednia = 0;
        ile_obiektow = 0;
    }




    void dodaj(int wartosc)
    {
        if(ile_obiektow == 99) return;

        tab[ile_obiektow] = wartosc;
        ile_obiektow++;
    }

    void usun()
    {
        if(ile_obiektow == 0) return;

        tab[ile_obiektow] = 0;
        ile_obiektow--;
    }

    double podaj_srednia()
    {
        this->policz_srednia();
        return this->srednia;
    }

    private:
    int ile_obiektow;
    int tab[100];
    double srednia;
    void policz_srednia()
    {
        for(int i = 0; i < ile_obiektow; i++)
        {
            srednia += tab[i];
        }
        srednia /= ( double )ile_obiektow;
    }
};