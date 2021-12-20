#include "Square.h"


string printShape(Shape* s);
void printArea(Shape* s);

int main(){
    Shape* shape = new Shape;
    Square* sq = new Square(4.0);
    printArea(shape);
    printArea(sq);
   
}





string printShape(Shape* s){
    return (s->printShape());
}

void printArea(Shape* s){
    cout<< s->getArea() <<endl;
}