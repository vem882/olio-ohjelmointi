#include "car.h"
#include <iostream>

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::printData()
{
    cout << "-*--*---*---*--*--*" << endl;
    cout << "Merkki: " << brand << endl;
    cout << "Malli: " << model << endl;
    cout << "Vuosi: " << yearModel << endl;
    cout << "-*--*---*---*--*--*" << endl;
}
Car::Car() {}
