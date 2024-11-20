#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void callOut() const;

    virtual ~Animal();
};

#endif // ANIMAL_H
