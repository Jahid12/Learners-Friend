#include <iostream>
#include "pasrOne.h"

using namespace std;

class myClass{
private:
    int day;
    int month;
    int year;

public:
    myClass(int d, int m, int y):
        day(d), month(m), year(y)
        {

        }
        friend void pasrOne::frndFunction(myClass &p);

};


void pasrOne::frndFunction(myClass &p)
{
    cout << "day: " << p.day << "i: " << i << endl;
}
int main()
{
    pasrOne pasrOneOb(322);
    myClass myOb(2, 3, 4);
    pasrOneOb.frndFunction(myOb);

    return 0;
}
