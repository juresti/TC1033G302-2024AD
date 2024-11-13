#include <cmath>
#include <iostream>
using namespace std;

class Point{
private:
    double x, y;
public:
    Point(double newX,double newY) : x{newX},y{newY} {}
    Point() : x{0.0},y{0.0} {}

    double getX() {return x;}
    double getY() {return y;}

    void setX(double newX) {x = newX;}
    void setY(double newY) {y = newY;}

    double distance(Point puntoA){
        return sqrt(pow(x - puntoA.getX(),2) +
                    pow(y - puntoA.getY(),2));
    }
};


int main(int argc, char const *argv[])
{
    cout << "*** Pruebas de la clase Point" << endl;
    Point punto1 {};
    Point punto2 {3.5,8.9};

    cout << "Punto 1 en (" << punto1.getX() << ","
        << punto1.getY() << ")" << endl;
    
    cout << "Punto 2 en (" << punto2.getX() << ","
        << punto2.getY() << ")" << endl;

    cout << "La distancia entre estos punto es: " <<
        punto1.distance(punto2) << endl;
    
    punto2.setX(5.0);
    punto2.setY(0.0);
    cout << punto2.distance(punto1) << endl;

    return 0;
}
