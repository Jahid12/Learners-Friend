#include <iostream>
#include "Kinematics.h"3
#include "NewtonianMechanics.h"
#include "Vector.h"
#include <fstream>
using namespace std;

int main()
{
    cout << "1.Vector\n2.Kinematics\n3.Newtonian Mechanics\n" << endl;
    int option;
    cin >> option;
    switch(option)
    {
    case 1:
        {
            Vector o3;
            break;
        }

    case 2:
        {
            Kinematics o1;
            break;
        }

    case 3:
        {
            NewtonianMechanics o2;
            break;
        }
    }


    return 0;
}
