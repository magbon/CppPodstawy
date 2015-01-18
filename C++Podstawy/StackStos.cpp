#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> abc;

    abc.push(5);
    abc.push(4);
    abc.push(3);
    abc.push(2);

    cout << abc.top() << endl;

    abc.pop();
     cout << abc.top() << endl;
     cout << abc.size() << endl;
     cout << abc.empty() << endl;
     return 0;
}
