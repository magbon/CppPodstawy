#include "a.h"
#include <iostream>

using namespace std;
int a = 5;

void fun (int && a);
int main()
{
    //int const b = 6;
    fun(10);
    cout << a << " " << b << endl;
    return 0;
}

