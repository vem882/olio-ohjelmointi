#include "car.h"
#include <iostream>

car::car(string brand, string model, int yearModel)
    : brand(brand), model(model), yearModel(yearModel) {}

void car::printData() const {
    cout << "Brand: " << brand << ", Model: " << model << ", Year: " << yearModel << endl;
}
