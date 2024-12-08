#include "aggregationa.h"

AggregationA::AggregationA(ClassB& value) : refB(value) {}

string AggregationA::getBinfo() const {
    return refB.getInfo();
}

void AggregationA::setBinfo(const string& value) {
    refB.setInfo(value);
}
