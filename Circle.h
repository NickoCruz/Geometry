#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "Shape.h"

class Circle: public Shape{
    protected:
        const double pi = 3.14159;

        double radius = 0.0;

    public:
        Circle();
        Circle(double radius){ this->radius = radius; };
        
        string shapeName() override {return "Circle"; };
        double getArea() override{ return (pi * pow(this->radius,2)); };


};



#endif