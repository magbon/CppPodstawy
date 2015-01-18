#include <iostream>
#include "Burrito.h"

using namespace std;

class BuckysClass{
    public:
        BuckysClass(string z){
            setName(z);
        }
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name;
};
int main()
{
    Burrito();
    BuckysClass bo("Lucky madzia");
    cout << bo.getName() << " "; // to taki plus :P
    BuckysClass bo2("Sally McSallad");
    cout << bo2.getName();

    Burrito lo;
    return 0;
}
