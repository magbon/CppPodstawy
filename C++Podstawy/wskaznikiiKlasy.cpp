#include <iostream>
using namespace std;

class Vector2D{
private:
    int x,y;
public:
    Vector2D(int _x = 0, int _y = 0)
    :x(_x),y(_y)
    {

    }
    void print(){
        cout << x << " " << y << endl;
    }
};
int main(){

    Vector2D* a1 = new Vector2D(2,5);
    a1 -> print();

    return 0;
}
