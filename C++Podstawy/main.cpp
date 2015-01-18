#include <iostream>
#include <string>

// funkcje prostokata hex oct dec ekran w centrum
using namespace std;

class BuckyClass{ // zbior klas
public: // access specifier
    // klasy, ktore sa publiczne
    void coolSaying(){
        cout << "spiewanie w chorze " << endl;
    }
    // konstruktor jest teki sam jak nazwa klasy

    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }

private: // zmiennych nie mozna robic publicznych w klasach
    string name;
};
void wydrukujCos();
int prostokat(int wysokosc, int szerokosc){
    return wysokosc * szerokosc;
}
int main()
{
    BuckyClass buckysObject; // obiekt mowi z ktora klasa sie pracuje
    buckysObject.coolSaying();
    BuckyClass bO;
    bO.setName("Madzia Bonczkowska");
    cout << bO.getName();

   	int b;
	int sum;
	cout << "Hello world\n!" << 'a' << endl; // output string // end line
    cout << "I love";

    int tuna = 3;
    cout << "\n---------------------\n";
    cout << "| dec  | hex  | oct |\n";
    // manipulatory
    std::cout << "|  " << 40 << "  |  " << std::hex << 40 <<"  |  " << std::oct << 40 << " |" << std::endl;
    cout << "---------------------\n";
    //cin >> b;
    b = 4;
    sum = b + 600;
    cout << dec << sum << endl;
    int wysokosc;
    int szerokosc;
    cout << "Podaj wysokosc i szerokosc prostokata: " <<endl;
    cout << "wysokosc:   ";
    cin >> wysokosc;
    cout << "szerokosc:   ";
    cin >> szerokosc;
    int pole = prostokat(wysokosc,szerokosc);
    cout << pole;

    wydrukujCos();

    int a = 5;
    switch(a){
        case 5: cout << "Bla bla" <<endl; break;
        case 6: cout << "chyba nie myslis ze to sie wydrukuje" << endl; break;
    }

    return 0;
}
void wydrukujCos(){
    cout << "\nJestem na ekranie terminala" << endl;
}
