#include <iostream>
#include <RedSquare.h>
#include <Circle.h>
#include <Triangle.h>
#include <Rectangle.h>

int main(){

    RedSquare bigSquare;
    bigSquare.addShape(new Circle(9));
    bigSquare.addShape(new Circle(3));
    bigSquare.addShape(new TriAngle(2,8));
    bigSquare.addShape(new Rectangle(1,7));
    std::cout<< bigSquare.calcSquare()<<std::endl;
    return 0;

}
