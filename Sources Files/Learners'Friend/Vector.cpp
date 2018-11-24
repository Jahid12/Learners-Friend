#include "Vector.h"
#include <iostream>
#include <fstream>
using namespace std;

Vector::Vector()
{
    x1 = y1 = z1 = x2 = y2 = z2 = 0; // make all 0

    //User Interface
    cout << "Select Option" << endl <<
     "1.Basic idea about Vector." << endl<<
     "2.Vector Addition." << endl <<
     "3.Vector Subtraction." << endl <<
     "4.Vector Dot(Scalar) multiplication." << endl <<
     "5.Vector Cross multiplication." << endl <<
     "6.Real life application of Vector." << endl ;
    cin >> option;
        switch(option){
    case 1:
        Basic_idea_about_Vector();
        break;
    case 2:
        vector_additon();
    }
}



void Vector::Basic_idea_about_Vector()
{
    std::ifstream f("vectores.txt");

    if (f.is_open())
        std::cout << f.rdbuf();
}
void Vector::get_vector()
{
    cout << "Input: \nVector1:";

    cin >> x1 >> y1 >> z1;
    cout << "Vector2:";
    cin >> x2 >> y2 >> z2;

}
void Vector::vector_additon()
{
    get_vector();
}
void Vector::vector_subtraction()
{
    get_vector();
    int z1,z2,z3;
    z1=x1-y1;
    z2=x2-y2;
    z3=x3-y3;
    cout << "\nAddition of the two vector is : ";
    cout << z1 << "i";
    if(z2<0){
        cout << z2 << "j";
    }
    else{
        cout << "+" << z2 << "j";
    }
    if(z3<0){
        cout << z3 << "k";
    }
    else{
        cout << "+" << z3 << "k";
    }
}
void Vector::scalar_multiplication()
{

}
void Vector::vector_multiplication()
{

}
