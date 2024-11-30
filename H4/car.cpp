#include "car.h"
#include <iostream>
using namespace std;

Car::Car() : model(""), brand("") {}

Car::Car(string b, string m) : model(m), brand(b) {}

void Car::setEngine() {
    engine.setHorsepower(249); //tehtavan annon mukaisesti lukua voi muuttaa 150. Tässä toteutuksessa käyetty oman auton tehoja.
    engine.setDisplacement(2.0);
}

void Car::setWheels() {
    wheel1.setSize(17);
    wheel1.setType("kesarengas");
    wheel2.setSize(17);
    wheel2.setType("kesarengas");
    wheel3.setSize(17);
    wheel3.setType("kesarengas");
    wheel4.setSize(17);
    wheel4.setType("kesarengas");
}

string Car::getModel() const {
    return model;
}

void Car::setModel(string m) {
    model = m;
}

string Car::getBrand() const {
    return brand;
}

void Car::setBrand(string b) {
    brand = b;
}

void Car::printDetails() const {
    cout << "Auto: " << brand << " " << model << endl;
    cout << "Moottori: " << engine.getHorsepower() << " hp, " << engine.getDisplacement() << " L" << endl;
    cout << "Rengas 1: " << wheel1.getSize() << " tuumaa, " << wheel1.getType() << endl;
    cout << "Rengas 2: " << wheel2.getSize() << " tuumaa, " << wheel2.getType() << endl;
    cout << "Rengas 3: " << wheel3.getSize() << " tuumaa, " << wheel3.getType() << endl;
    cout << "Rengas 4: " << wheel4.getSize() << " tuumaa, " << wheel4.getType() << endl;
}
