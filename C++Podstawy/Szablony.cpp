#include <iostream>
#include <vector>


using namespace std;

template<class T>
class ABC
{
public:
    ABC(T x)
    {
        cout << x << " nie jest char\n";
    }
};
template<>
class ABC<char>
{
public:
    ABC(char x)
    {
        cout << x << " jest char\n";
    }
};

int main(){
    ABC<char> abc1('a');
    ABC<int> abc2(123);
    return 0;
}
