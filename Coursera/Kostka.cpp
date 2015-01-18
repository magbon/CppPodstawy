#include <iostream>
#include <cstdlib>
#include <ctime>

// C = C++
// malloc() = new
// free = delete

using namespace std;
const int sides = 6;
inline int r_sides(){ // inline dyrektywa kompilatora
    return(rand() %sides + 1);
}
int main(){

    cout << r_sides() << endl;
    cout << r_sides() << endl;
    cout << r_sides() << endl;

    const int n_dice = 2;
    int d1,d2;
    srand(clock());
    cout << "\nEnter number of trials: ";
    int trials; // proby
    cin >> trials;
    int * outcomes = new int[n_dice * sides + 1 ];
    //TYPE*s;

    for (int j = 0; j< trials; ++j) // deklaracje lokane w for
        outcomes[(d1 = r_sides()) + (d2 = r_sides()) ] ++;
        cout << "probality" << endl;
        for(int j = 2 ;j < n_dice *sides + 1; ++j){
            cout << "j=" << j << "p=" << static_cast<double>(outcomes[j])/trials << endl;
        }

    return 0;
}
