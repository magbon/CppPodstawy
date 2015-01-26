#pragma once
#include <string>

class Student
{
    public:
    Student(std::string nazwisko ,double srednia ,int numer_indeksu);
    virtual ~Student();
    virtual void show();

    operator int() const
    {
        return this->numer_indeksu;
    }

    operator double() const
    {
        return this->srednia;
    }

    void operator=(double d)
    {
        this->srednia = d;
    }

    char operator[](int i)
    {
        std::string s = std::to_string(this->numer_indeksu);

        return s[i];

    }

    private:
    std::string nazwisko;
    double srednia;
    int numer_indeksu;

    
};

