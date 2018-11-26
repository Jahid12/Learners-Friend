#include <iostream>
#include <cstring>
#include "NewtonianMechanics.h"
using namespace std;


NewtonianMechanics::NewtonianMechanics()
{
    cout << "1.Basic theories of mechanics\n" <<
            "2.Newtons_laws\n" <<
            "3.Radius of gyration\n" <<
            "4.Angular momentum\n"<<
            "5.Torque\n" <<
            "6.Centrifugal force\n" <<
            "7.Back\n" <<
            "Select option from above: " ;

    while(1){
        cin >> option;
       switch(option){
        case 1:
                Basic_theories_of_mechanics();
                break;
            case 2:
                Newtons_laws();
                break;
            case 3:
                radius_of_gyration();
                break;
            case 4:
                angular_momentum();
                break;
            case 5:
                torque();
                break;
            case 6:
                centrifugal_force();
                break;
            case 7:
                goto a;
       }
       a:
           break;
    }
}

NewtonianMechanics::~NewtonianMechanics()
{
    //dtor
}

void NewtonianMechanics::Basic_theories_of_mechanics()
{
    //
}
void NewtonianMechanics::Newtons_laws()
{
    cout << "From the Second law's Mathematical term F = ma, where f,m,a denote accordingly force , mass and acceleration" << endl;
    cout << "For finding Force from the formula,\n Put the value of m and a : ";
    cin >> mass >> accel;
    force = mass * accel;
    cout << "The force is F = " << force << endl;
}
void NewtonianMechanics::radius_of_gyration()
{


}
void NewtonianMechanics::angular_momentum()
{

}
void NewtonianMechanics::torque()
{

}
void NewtonianMechanics::centrifugal_force()
{

}
