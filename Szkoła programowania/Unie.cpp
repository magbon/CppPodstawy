#include <iostream>

using namespace std;

union unia //tak definiujemy unie
{
    short myShort; // 2 bajty
    char myChar; // 1 bajt
};

int main()
{
    unia mojaUnia;
    mojaUnia.myShort = 0; // to też musi miec wartosc
    mojaUnia.myChar = 'j'; // podstawienie
    cout << mojaUnia.myShort << endl; //
    cout << mojaUnia.myChar << endl;

     mojaUnia.myShort = 106;
    mojaUnia.myChar = 0; // podstawienie
    cout << mojaUnia.myShort << endl;

}
