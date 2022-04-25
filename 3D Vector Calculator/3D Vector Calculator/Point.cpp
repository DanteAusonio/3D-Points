//
//  Point.cpp
//  3D Vector Calculator
//
//  Created by Dante Ausonio on 4/22/22.
//

#include "Point.hpp"

using namespace std;


void Point::Make_Point()
{
    cout << "X-Coordinate: ";
    cin >> x;
    cout << "Y-Coordinate: ";
    cin >> y;
    cout << "Z-Coordinate: ";
    cin >> z;
    Name_Point();
}

void Point::Name_Point()
{
    coord = "(" + to_string(x) + ", " + to_string(y) + ", " + to_string(z) + ")";
}

