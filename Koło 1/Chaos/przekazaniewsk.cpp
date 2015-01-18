#include <iostream>
using namespace std;
void pokaz(const int *pocz,const int *kon){
    const int * pt;

    for(pt = pocz; pt !=kon; pt++){
        cout << pt << " ";
    }
}
int main(){
    int tab[5]={3,4,5,6,7};

    pokaz(&tab[0],&tab[4]);

    int x, &r = x;

    r = 10;

    cout << endl<< x <<"  " << r;

    x =30;

     cout << endl<< x <<"  " << r;

      x =20;

     cout << endl<< x <<"  " << r;
}
