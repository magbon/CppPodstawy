#include<iostream>
#include<climits>
#include<math.h>


int main() {
    using namespace std;

    double mln = 1.0e6;

    float f = 1.0f/7;
    double d = 1.0/7;

    cout << f << endl;
    cout << d << endl;
    cout << mln * f << endl;
    cout << mln *d << endl;

    string napis3  = " Kowalski " " dddd "; // laczonko
    char lancuch[50];
    cin >> lancuch; // jak spacja to koniec lancucha
   // cin.getline(lancuch, sizeof lancuch); // pobiera cala linie
   int nap = napis3.length();
   napis3.clear();
    cout << napis3 << " " << lancuch << nap  << endl;

    cout << "Program rozwiazuje rownanie kwadratowe ax^2+bx+c=0" << endl;

    cout << "Podaj parametr a" << endl;
    double a;
    cin >> a;

    if (a==0) {
        cout << "To nie jest rownanie kwadratowe" << endl;
        return 0;
    }

    cout << "Podaj parametr b" << endl;
    double b;
    cin >> b;

    cout << "Podaj parametr c" << endl;
    double c;
    cin >> c;

    double delta=b*b-4*a*c;
    if (delta<0) {
        cout << "Rownanie kwadratowe nie ma rozwiazan" << endl;
    } else
    if (delta==0)
    {
        cout << "Rownanie kwadratowe ma 1 rozwiazanie" << endl;
        double x0 = -b/(2*a);
        cout << "x0 = " << x0 << endl;
    } else // delta>0
    {
        cout << "Rownanie kwadratowe ma 2 rozwiazania" << endl;
        double x1 = (-b-sqrt(delta))/(2*a);
        double x2 = (-b+sqrt(delta))/(2*a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;

    }

    return 0;
}
