#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Shape{
    public:
        virtual double getArea(){return 0.0;}
        virtual string printShape(){ return "Shape";}
        
};



#endif