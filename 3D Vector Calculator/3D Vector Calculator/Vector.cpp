//
//  Vector.cpp
//  3D Vector Calculator
//
//  Created by Dante Ausonio on 4/22/22.
//

#include "Vector.hpp"

using namespace std;

void Vector::Name_Vector()
{
    components = "<" + to_string(i) + ", " + to_string(j) + ", " + to_string(k) + ">.";
}
