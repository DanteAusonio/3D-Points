//
//  Vector.cpp
//  3D Vector Calculator
//
//  Created by Dante Ausonio on 4/22/22.
//

#include "Vector.hpp"

using namespace std;


void Vector::Make_Vector(int x, int y, int z)
{
    i = x;
    j = y;
    k = z;
    Name_Vector();
}






void Vector::Name_Vector()
{
    components = " <" + to_string(i) + ", " + to_string(j) + ", " + to_string(k) + ">";
}


void Vector::Print_Components()
{
    cout << components;
}

