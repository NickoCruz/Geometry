#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"

string shapeName(Shape* s);
void printArea(Shape* s);

int main(){
    Shape* shape = new Shape;
    Square* sq = new Square(4.0);
    Rectangle* rec = new Rectangle(3,4);
    Circle* circ = new Circle(2.0);
    printArea(shape);
    printArea(sq);
    printArea(rec);
    printArea(circ);
}





string getName(Shape* s){
    return (s->shapeName());
}

void printArea(Shape* s){
    cout<< s->shapeName() << "'s Area = "<< s->getArea() <<endl;
}