#include <iostream>

using namespace std;

class Event{

    int day, month, year;
    int minutes, hour;
    int aname;

    string name;


    public:
    // Event(string,int,int,int,int,int);
    Event();
    Event(int);
    Event(string = "brak",int = 1,int = 1,int = 2015,int = 0,int = 0);
    ~Event();
    void load();
    void show();

};
