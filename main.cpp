#include "Square.h"


string getShape(Shape* s);

int main(){
    Shape* a = new Shape;
    Square* s = new Square;
    cout<<getShape(s)<<endl;
    cout<<getShape(a)<<endl;
}

string getShape(Shape* s){
    return (s->printShape());
}