#include <iostream>

using namespace std;

class Figura{
protected:
    int wyskokosc, szerokosc;
public:
    void ustaw_wartosc(int a, int b)
    {
        wysokosc = a;
        szerokosc = b;

    }
};
class Prostokat : public Figura {
public:
    int pole(){
         return wyskokosc * szerokosc;
    }
};

class Trojkat : public Figura {
public:
    int pole(){
         return wyskokosc * szerokosc;
    }
};
int main(){
    Trojkat tr;
    Prostokat pr;
    tr.ustaw_wartosc(3,4);
    pr.ustaw_wartosc(5,6);

    cout << tr.pole() << endl;
    cout << pr.pole() << endl;
return 0;
}
