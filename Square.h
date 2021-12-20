#ifndef __SQUARE_H__
#define __SQUARE_H__

#include "Shape.h"
#include <cmath>

using namespace std;

class Square: public Shape {
    protected:
        
    public:
        string printShape() override {return "Square";}
        


};



#endif