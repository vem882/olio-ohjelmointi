#include "assosiationa.h"

AssosiationA::AssosiationA(ClassB value) : objectB(value) {}

string AssosiationA::getBinfo() const {
    return objectB.getInfo();
}

void AssosiationA::setBinfo(const string& value) {
    objectB.setInfo(value);
}
