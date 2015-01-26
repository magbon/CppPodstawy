#include <iostream>

using namespace std;

int * dodaj1(const int &j)
{
    int *i = new int;
    *i = j + 1;
   // int i = j + 1;
    return i;

}


int main()
{
    const int pj = 4;
    const int *j = &pj;

     cout << j << " " << *j << " " << dodaj1(pj);

    int *dane = new int[32];
    for(int i = 0; i < 32; i++ ){
        *(dane + i) = 0;
        cout << *dane;
    }

    delete [] dane;


    int a = 10;
    int b = 20;
    const int *x = &b;
    x = 0;
    x = &a;
    //*x = 10; // bo const
    x = &a;
    a = 20;


    return 0;
}
