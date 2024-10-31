#include <iostream>
#include <iomanip>
#include "functions.h"

void calcSum(int a, int b) {
    std::cout << "Summa: " << a + b << std::endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        std::cout << "Virhe: Jakaja ei voi olla nolla." << std::endl;
    } else {
        std::cout << "Osamaara: " << std::setprecision(2) << static_cast<double>(a) / b << std::endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        std::cout << "Virhe: Jakaja ei voi olla nolla." << std::endl;
        return 0.0;
    }
    return static_cast<float>(a) / b;
}
