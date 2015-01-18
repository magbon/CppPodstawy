#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void func(string i)
{
    i.push_back('!');
    cout << " " << i;
}

int main(){
    vector<string> abc;
    abc.push_back("Ala");
    abc.push_back("Ma");
    abc.push_back("Kota");

    for_each(abc.begin(),abc.end(),func);
}
