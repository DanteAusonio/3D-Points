#include <iostream>
#include <cmath>
#include "Point.hpp"
#include "Vector.hpp"
using namespace std;
//Program that finds the position vector between 2 points in 3D Space

//Get User Input for Points
void UserInput (Point &a, Point &b){
    cout << "Input point 'a' coordinates: " << endl;
    a.Make_Point();
    cout << "point a is at " << a.coord << endl;
    cout << "Input point 'b' corrdinates: " << endl;
    b.Make_Point();
    cout << "point b is at " << b.coord << endl;
}






//Select Operation to Perform
void ChooseOperation (int &x)
{
    cout << "Which operation would you like to perform on a and b?" << endl;
    cout << "1) Find the position vector from a to b" << endl;
    cout << "2) Find the mid point between a and b." << endl;
    cout << "3) Find the distance between a and b" << endl;
    cin >> x;
}






//Calculate Position Vector Between Points
void FindPositionVector(Point a, Point b, Vector A){
    A.i = b.x - a.x;
    A.j = b.y - a.y;
    A.k = b.z - a.z;
    A.Name_Vector();
cout << "The position vector from a" << a.coord << " to b" << b.coord << " is: " << A.components << endl;
}






void FindMdPt (Point a, Point b){
    Point c;
    double diffx;
    double diffy;
    double diffz;
    
    diffx = (b.x - a.x)/2;
    c.x = a.x + diffx;
    
    diffy = (b.y - a.y)/2;
    c.y = a.y + diffy;
    
    diffz = (b.z - a.z)/2;
    c.z = a.z + diffz;
    
    c.Name_Point();
    
    cout << "The mid point between " << a.coord << " and " << b.coord << " is: " << c.coord << endl;
}





void FindDistance (Point a, Point b)
{
    double diffx;
    double diffy;
    double diffz;
    double total;
    double result;
    
    diffx = b.x - a.x;
    diffy = b.y - a.y;
    diffz = b.z - a.z;
    
    diffx = pow(diffx, 2);
    diffy = pow(diffy, 2);
    diffz = pow(diffz, 2);
    
    total = diffx + diffy + diffz;
    result = sqrt(total);
    
    cout << "The distance between " << a.coord << " and " << b.coord << " is: " << result << endl;
}





void WhatNext(int &r, int &n)
{
    int x;
    cout << "Would you like to (1) restart, or (2) perform another operation on these points?" << endl;
    cin >> x;
    
    if (x == 1)
    {
        r = 0;
        n = 1;
    }else if (x == 2)
    {
        r = 1;
        n = 0;
    }
}





int main(int argc, const char * argv[])
{
//Variable Declarations
    Point a;
    Point b;
    Vector A;
    int Operation;
    int restart = 0;
    int NewOp;
    
    
    while (restart == 0)
    {
        //Define points a and b
        UserInput(a, b);
        NewOp = 0;

        while (NewOp == 0)
        {
            //Choose Operation
            ChooseOperation(Operation);
    
            //1.) Position Vector
            if (Operation == 1){
                FindPositionVector(a, b, A);
            }
        
            //2.) Mid Point
            if (Operation == 2){
                FindMdPt(a, b);
            }
        
            //3.) Distance
            if (Operation == 3){
                FindDistance(a, b);
            }
                
            //Continue, Quit, or Restart
                WhatNext(restart, NewOp);
        }
    }
}





