#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"
#include <string>
using namespace std;

class Car {
private:
    Engine engine;
    Wheel wheel1;
    Wheel wheel2;
    Wheel wheel3;
    Wheel wheel4;
    string model;
    string brand;

public:
    Car();
    Car(string b, string m);

    void setEngine();
    void setWheels();

    string getModel() const;
    void setModel(string m);

    string getBrand() const;
    void setBrand(string b);

    void printDetails() const;
};

#endif // CAR_H
