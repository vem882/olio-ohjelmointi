#include "car.h"
#include <iostream>
using namespace std;

int main() {
    Car myCar("Mitsubishi", "Evolution X");
    myCar.setEngine();
    myCar.setWheels();
    myCar.printDetails();

    return 0;
}
