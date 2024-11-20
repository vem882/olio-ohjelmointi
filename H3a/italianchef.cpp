#include "italianchef.h"
#include <iostream>
#include <string>
using namespace std;

ItalianChef::ItalianChef(const string& name) : Chef(name) {
    cout << "ItalianChef " << this->name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << this->name << " destruktori" << endl;
}

void ItalianChef::makePasta() {
    cout << "Italian Chef " << this->name << " makes pasta" << endl;
}

string ItalianChef::getName() {
    return this->name;
}
