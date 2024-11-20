#include "chef.h"
#include <iostream>
#include <string>
using namespace std;


Chef::Chef(const string& name) : name(name) {
    cout << "Chef " << this->name << " konstruktori" << endl;
}


Chef::~Chef() {
    cout << "Chef " << this->name << " destruktori" << endl;
}


void Chef::makeSalad() {
    cout << "Chef " << this->name << " makes salad" << endl;
}


void Chef::makeSoup() {
    cout << "Chef " << this->name << " makes soup" << endl;
}
