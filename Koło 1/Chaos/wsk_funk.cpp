#include <iostream>
using namespace std;
void foo(int *n)
{
    (*n)++;
    cout << *n;
}

int main(){

    int n = 4;
    foo(&n);
    cout << n;
}
