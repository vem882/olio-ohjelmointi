#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main() {
    vector<car> carList;

    car ObjCar1("Mitsubishi", "Evolution", 2009);
    car ObjCar2("Toyota", "GR", 2024);
    car ObjCar3("Tesla", "Cybertruck", 2023);

    carList.push_back(ObjCar1);
    carList.push_back(ObjCar2);
    carList.push_back(ObjCar3);

    carList[1].printData();

    for (int i = 0; i <= 2; i++)
    {
        carList[i].printData();
    }

    return 0;
}
