#ifndef RECTANGLE_H
#define RECTANGLE_H
using namespace std;

class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle();
    double getArea();
    double getCircum();
    void setWidth(double newWidth);
    void setHeight(double newHeight);
    void printCalc();
};

#endif // RECTANGLE_H
