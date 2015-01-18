#include <iostream>
#include <string>

using namespace std;

string abc = "Ala ma kota";
int main(){

    size_t pos;
    char buffer[20];
    cout << abc.size() << endl;

    if(abc.compare("Ala ma kota") != 0)
        cout << "Nie" << endl;

    pos = abc.find("Ala"); // znajdowanie wewnatrz stringa

    if(pos != string::npos)
        cout << "Znaleziono" << endl;

    int i = abc.copy(buffer, 6,0);
    buffer[i] = '\0'; // znak o kodzie 0
    cout << buffer << endl;

    abc.push_back('a');

    cout << abc.c_str() << endl; // string w stylu C o.O

    return 0;
}
