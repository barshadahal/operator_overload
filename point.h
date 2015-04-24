/*Author Barsha Dahal
Roll No. 0309'A'
To implement operator overloading using Point Class
*/


#include<iostream>
#include <string>

#ifndef POINT_H
#define POINT_H

using namespace std;

class Point
{

public:
    Point (int x=0, int y=0);
    Point();
    void setX(int);
    int getX();
    void setY(int);
    int getY();
    void setXY(int, int);

    void print();
    Point operator+(Point p)const;

private:
    int x,y;
};
#endif
