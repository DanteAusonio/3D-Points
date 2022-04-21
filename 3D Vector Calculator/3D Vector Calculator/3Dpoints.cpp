#include <iostream>
using namespace std;


//Program that finds the position vector between 2 points in 3D Space

class Point
{
public:
    int x, y, z;
    
    void Coord(int x, int y, int z)
    {
        string Coord = "(" + to_string(x) + ", " + to_string(y) + ", " + to_string(z) + ")";
    }
};


class Vector
{
public:
    int i, j, k;
    
};


int main(int argc, const char * argv[]) {

    Point a;
    Point b;
    
    Vector A;
    
//3D Point 1
    cout << "enter the first point: " << endl;
    cout << "X1: ";
    cin >> a.x;
    cout << "Y1 is: ";
    cin >> a.y;
    cout << "Z1 is: ";
    cin >> a.z;
    a.Coord(a.x, a.y, a.z);
    cout << "The first point is: (" << a.x << ", " << a.y << ", " << a.z << ")." << endl;
    
    
//3D Point 2
    cout << "enter the second point: " << endl;
    cout << "X2 is: ";
    cin >> b.x;
    cout << "Y2 is: ";
    cin >> b.y;
    cout << "Z2 is: ";
    cin >> b.z;
    cout << "The second point is: (" << b.x << ", " << b.y << ", " << b.z << ")." << endl;


    cout << "The position vector from (" << a.x << ", " << a.y << ", " << a.z << ") to (" << b.x << ", " << b.y << ", " << b.z << ") is: ";
    
// Calculate
    A.i = b.x - a.x;
    A.j = b.y - a.y;
    A.k = b.z - a.z;
    
    cout << "<" << A.i << ", " << A.j << ", " << A.k << ">." << endl;
    
}
