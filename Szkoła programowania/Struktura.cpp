#include <iostream>
using namespace std;
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable guest =
    {
        "Gloria Victis",
        1.44,
        4.55
    };

     inflatable pal =
    {
        "Arthur Konieczny",
        4.54,
        43.55
    };

    cout << "Okazja " << guest.name;
    cout << " oraz " << pal.name << "!\n";
    cout << "Mozesz miec obie te figurki za ";
    cout << guest.price + pal.price << " zl" << endl;
    return 0;
}
