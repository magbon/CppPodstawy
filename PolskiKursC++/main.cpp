#include <iostream>
#include <string>

using namespace std;



int silnia(int n){
   if (n == 1)
        return 1;
   else{
    return silnia(n-1) * n;
   }
}
// przeci¹¿anie funkcji zale¿nie ile bedzie
// parametrów i jakie mo¿na mieæ funckje o takich
// samych nazwach
double dodaj(double a, double b, double c){
    return a + b + c;
}
double dodaj(double a, double b){
    return a + b;
}

void bekon(){
    cout << "Witaj bekonie" << endl;
}
int znowuBekon(){
    return 5;
}
int main()
{
    cout << silnia(5) << endl;
    bekon();
    cout << znowuBekon() << endl;
    const double pi = 3.14;
    int licznik_petli = 10;
    cout << "xor - alternatywa wykluczajaca ^" << endl;
    if( 4 == 4 ^ 4 == 4){
        cout << "prawda prawda" << endl;
    }
    if( 4 == 4 ^ 4 != 4){
        cout << "prawda falsz" << endl;
    }
    if( 4 != 4 ^ 4 == 4){
        cout << "falsz prawda" << endl;
    }
    if( 4 != 4 ^ 4 != 4){
        cout << "falsz falsz" << endl;
    }
    do
    {
        cout << licznik_petli << ": lalala"  << endl;
        licznik_petli += 10;
    }while (licznik_petli < 1);
    return 0;
}
