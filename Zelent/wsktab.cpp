#include<iostream>
#include<algorithm>

using namespace std;

void pokaz(const int*, const int*);

int main()
{
    int a[] = {6,5,3,14,5};
    pokaz(a,a+5);
    sort(a,a+5);
    pokaz(a,a+5);
    return 0;
}

void pokaz(const int* pocz, const int* kon)
{
    const int* pt;
    for (pt = pocz; pt != kon; pt++)
        cout << *pt << " ";
    cout << endl;
}
