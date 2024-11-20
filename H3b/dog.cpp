#include "dog.h"

void Dog::callOut() const {
    cout << "Koira haukkuu!" << endl;
}

Dog::~Dog() {
    cout << "Dog tuhoutuu." << endl;
}
