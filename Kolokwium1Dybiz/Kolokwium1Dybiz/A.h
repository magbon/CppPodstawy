#pragma once
#include "Student.h"
#include <string>

class A : public Student
{
    public:
    A();
    ~A();
    void show();

    private:
    std::string* zm;
};

