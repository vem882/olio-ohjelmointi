#include "animal.h"

void Animal::callOut() const {
    cout << "Elain aantelee." << endl;
}

Animal::~Animal() {
    cout << "Animal tuhoutuu." << endl;
}
