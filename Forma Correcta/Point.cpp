#include "Point.hpp"
#include <cmath>

Point::Point(double nX,double nY):x{nX},y{nY} {} 
Point::Point() : x{0.0},y{0.0} {}

double Point::getX() {return x;}
double Point::getY() {return y;}

void Point::setX(double nX) {x = nX;}
void Point::setY(double nY) {y = nY;}

double Point::distance(Point puntoA){
    return sqrt(pow(x - puntoA.getX(),2) +
                pow(y - puntoA.getY(),2));
}
