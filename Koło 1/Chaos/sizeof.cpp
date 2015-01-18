#include<iostream>
int main() {
   using namespace std;
   int tab1[3];
   tab1[0] = 15;
   tab1[1] = 20;
   tab1[2] = 15;

   int tab2[3] = {15, 20, 15};
   //
   //tab2[0] = tab1[1] + tab2[0];

   cout << tab2[0] << endl;
   cout << (tab1==tab2) << endl;
   cout << sizeof tab1[1] << endl;
   cout << sizeof tab1 << endl;

   int zn = 222;
   int *p_zn = &zn;

   cout << p_zn;
   cout << endl;
    int * tab = new int[ 10 ];
     for(int i = 0; i < 10; i++)
     tab[i] =0;
 *tab = 7;
 for(int i = 0; i < 10; i++)
    cout << tab[i] << endl;
 tab [0] = 6;
 tab [9] = 1;
 for(int i = 0; i < 10; i++)
    cout << tab[i] << endl;
    cout<< endl;
 *( tab +5) = 6;
  for(int i = 0; i < 10; i++)
    cout << tab[i] << endl;
 delete [] tab;
 for(int i = 0; i < 10; i++)
    cout << tab[i] << endl;

   return 0;
}
