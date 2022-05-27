//
//  Vector.hpp
//  3D Vector Calculator
//
//  Created by Dante Ausonio on 4/22/22.
//

#ifndef Vector_hpp
#define Vector_hpp
#include <stdio.h>
#include <iostream>

using namespace std;


class Vector
{
public:
    int i, j, k;
    string components;
    
    void Make_Vector(int x, int y, int z);
    void Name_Vector();
    void Print_Components();
};

#endif /* Vector_hpp */
