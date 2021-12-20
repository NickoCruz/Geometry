#ifndef __SQUARE_H__
#define __SQUARE_H__

#include "Shape.h"


using namespace std;

class Square: public Shape {
    protected:
        double x;
    public:
        Square(double sideLength){this->x = sideLength;}
        string shapeName() override {return "Square";}
        double getArea() override;
};

double Square::getArea(){
    this->area = pow(x,2);
    return this->area;
}


#endif