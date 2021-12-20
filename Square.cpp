#include "Square.h"

double Square::getArea() override{
    this->area = pow(x,2);
    return this->area;
}
