#include <iostream>

using namespace std;

template <class typ>
typ dodaj (typ x, typ y)
{
    return x + y;
}

int main(){

    cout << dodaj<string> ("abc","def")<< endl;
    cout << dodaj<int> (2,5) << endl;
    cout << dodaj<double> (2.5, 2.5) << endl;
    return 0;
}
