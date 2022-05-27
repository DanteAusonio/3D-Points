//
//  Point.hpp
//  3D Vector Calculator
//
//  Created by Dante Ausonio on 4/22/22.
//

#ifndef Point_hpp
#define Point_hpp
#include <stdio.h>
#include <iostream>

using namespace std;


class Point
{
public:
    double x, y, z;
    string coord;
    
    void Make_Point();
    void Name_Point();
};

#endif /* Point_hpp */
