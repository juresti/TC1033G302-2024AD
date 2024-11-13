
class Point{
private:
    float x,y;
public:
    Point(double,double);
    Point();

    double getX();
    double getY();

    void setX(double);
    void setY(double);

    double distance(Point);
};
