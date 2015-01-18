#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream mojplik;
    mojplik.open("abc.txt");
    mojplik << "Przykladowy tekst";
    mojplik.close();
}
