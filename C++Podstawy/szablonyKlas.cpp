#include <iostream>

using namespace std;

template <class T, int ilosc> // szablon
class NaszaTablica{
private:
    T* elementy; // wskaznik na obiekt typu T
public:
    NaszaTablica(){
        elementy = new T[ilosc];
    }
};

int main(){
    NaszaTablica<int, 100> tablica;
    return 0;
}
