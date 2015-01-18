#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> VectorI; // waktor o nieokreslonym rozmiarze
    //vector<int> VectorI(10); // wektor z dziesiecioma elementami
    //vector<int> VectorI(10,100); // wektor z dziesiecioma elementami po 100 kazdy

    VectorI.push_back(1);
    VectorI.push_back(2);
    VectorI.push_back(3);
    VectorI.push_back(4); // wrzuca na koniec wektora podana wartosc
    VectorI.pop_back();
    VectorI.erase(VectorI.begin(),VectorI.end());// usuwanie od do
    VectorI.clear();
    VectorI.resize(20);
    cout << VectorI[2] << endl;
    cout << VectorI.size() << endl;
}
