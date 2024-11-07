#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle() : width(0), height(0) {}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

double Rectangle::getArea()
{
    return width * height;
}



double Rectangle::getCircum()
{
    return 2 * (width + height);
}

void Rectangle::printCalc()
{
    double circumference = getCircum();
    double area = getArea();
    cout << "-*--*---*---*--*--*" << endl;
    cout << "Pinta-Ala: " << area << endl;
    cout << "Ymparysmitta: " << circumference << endl;
    cout << "-*--*---*---*--*--*" << endl;
}
