#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class car {
private:
    string brand;
    string model;
    int yearModel;

public:
    car(string brand, string model, int yearModel);
    void printData() const;
};

#endif // CAR_H
