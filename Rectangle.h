#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "Shape.h"

class Rectangle: public Shape{
    protected:
        double x = 0;
        double y = 0;

    public:
        Rectangle();
        Rectangle(double x, double y):x(x),y(y){};
        double getArea() override;
        string shapeName() override {return "Rectangle"; }


};

double Rectangle::getArea(){
    this->area = this->x * this->y;
    return(this->area);
}




#endif