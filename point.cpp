/*
Author: Barsha Dahal
Roll No. 0309'A'
To implement operator overloading using Point Class
*/

#include<iostream>
#include <string>
#include "Point.h"

using namespace std;

Point::Point (int x , int y )
{

    setX(x);
    setY(y);
    setXY(x,y);
}


void Point:: setX(int x)
{
    this->x=x;
}

int Point:: getX()
{
    return x;
}

void Point::setY(int y)
{
    this->y=y;
}
int Point:: getY()
{
    return y;
}

void Point:: setXY(int x, int y)
{
    this->x=x;
    this->y=y;
}

void Point:: print()
{
    cout<<"\n(" <<getX() <<","<< getY()<< ")\n";

}

Point Point:: operator+(Point p)const
{
     return Point (x +p.getX(), y+p.getY());
}



