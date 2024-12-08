#include "car.h"
#include <iostream>
using namespace std;

int main() {
    //Tehtavan annon mukaisesti voi muuttaa Toyota Corollaksi. Koodissa kaytetty oman auton tietoja.
    Car myCar("Mitsubishi", "Evolution X");
    myCar.setEngine();
    myCar.setWheels();
    myCar.printDetails();

    return 0;
}
