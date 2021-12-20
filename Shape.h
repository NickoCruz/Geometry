#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <iostream>

using namespace std;

class Shape{
    protected:
        double area = 0;
        double x = 0;
        double y = 0;

    public:
        Shape();

        Shape(double x, double y);

        virtual void calculateArea(Shape* ) = 0;


};





#endif