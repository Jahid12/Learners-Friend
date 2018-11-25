#include <iostream>
#include "Kinematics.h"
using namespace std;

Kinematics::Kinematics()
{
    cout << "Select option:";
}

Kinematics::~Kinematics()
{
    //dtor
}

void Kinematics::basic_theories_of_kinematics()
{
    //under working
}
void Kinematics::constant_velocity()
{
    int v,t,s;
    cout << "At uniform velocity distant s=vt.where v is the uniform velocity,t is time.\n" << "For finding distant put the value of v=";
    cin >> v;
    cout << "\t\t\t\t t=";
    cin >> t;
    s=v*t;
    cout << "Distance is : " << s;
}
void Kinematics::acceleration()
{
    //under working
}


void Kinematics::angular_velocity()
{
    //under working
}
