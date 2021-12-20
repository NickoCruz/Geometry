#ifndef __SQUARE_H__
#define __SQUARE_H__

#include "Shape.h"


using namespace std;

class Square: public Shape {
    protected:
        double x;
        double area;
    public:
        Square(double sideLength){this->x = sideLength;}
        string printShape() override {return "Square";}
        double getArea() override;
};



#endif