#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    string tekst;

    ifstream mojplik("abc.txt");
    if(mojplik.is_open()){
        while(mojplik.good())
        {
            getline(mojplik,tekst);
            cout << tekst << endl;

            for(i = 0;i < 100 ; i++ ){



            }


        }

        mojplik.close();
    }
}
