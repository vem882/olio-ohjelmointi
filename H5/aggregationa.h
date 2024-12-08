#ifndef AGGREGATIONA_H
#define AGGREGATIONA_H

#include "classb.h"

class AggregationA {
private:
    ClassB &refB;
public:
    AggregationA(ClassB& value);
    string getBinfo() const;
    void setBinfo(const string& value);
};

#endif // AGGREGATIONA_H
