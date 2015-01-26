#include<iostream>
using namespace std;

template<typename T>
T foo(T a, T b)
{
    if (a<b) return a;
    return b;
}

int foo(int a, int b)
{
    if (a>b) return a;
    return b;
}

int main()
{
    int i1 = 4;
    int i2 = 7;
    double d1 = 3.25;
    double d2 = 4.54;
    cout << foo(i1, i2) << endl;
    cout << foo(d1, d2) << endl;
    cout << foo<>(i1,i2) << endl;
    cout << foo<int>(d1,d2) << endl;
    return 0;
}
