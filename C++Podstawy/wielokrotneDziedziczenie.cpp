#include <iostream>

using namespace std;

class A {
 public:
    void methodA(){
        cout << "A" << endl;
    }
};
class B {
public:
    void methodB(){
        cout << "B" << endl;
    }
};
class C {
public:
    void methodC(){
        cout << "C" << endl;
    }
};
class X : public A, public B, public C {
public:
    void wywolajMetody(){
        methodA();
        methodB();
        methodC();
    }
} ;
int main(){

    X obiektX;
    obiektX.wywolajMetody();
return 0;
}
