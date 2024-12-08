#ifndef ASSOSIATIONA_H
#define ASSOSIATIONA_H

#include "classb.h"

class AssosiationA {
private:
    ClassB objectB;
public:
    AssosiationA(ClassB value);
    string getBinfo() const;
    void setBinfo(const string& value);
};

#endif // ASSOSIATIONA_H
