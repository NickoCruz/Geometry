#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Shape{
    protected:
        double area = 0.0;
    public:
        virtual double getArea(){return 0.0;}
        virtual string shapeName(){ return "Shape";}
        
};



#endif