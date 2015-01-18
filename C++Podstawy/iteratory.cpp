#include <iostream>
#include <vector>


using namespace std;

int main(){

    vector<int> abc;
    abc.push_back(1);
    abc.push_back(2);
    abc.push_back(3);
    abc.push_back(4);
    abc.push_back(5);
    abc.push_back(6);

    vector<int>::iterator it;

    for(it = abc.begin(); it !=abc.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
