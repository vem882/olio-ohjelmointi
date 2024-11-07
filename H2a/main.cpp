#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"


using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Mitsubishi");
    objCar.setModel("Lancer SportBack Ralliart");
    objCar.setYearModel(2009);
    objCar.printData();

    Rectangle *objRectangle = new Rectangle;
    objRectangle -> setWidth(9);
    objRectangle -> setHeight(52);
    objRectangle -> printCalc();
    delete objRectangle;
    objRectangle = nullptr;

    unique_ptr <Student> objStudent = make_unique <Student> ();
    objStudent -> setName("Martin Testi");
    objStudent -> setStudentNumber(48759);
    objStudent -> setAverage(4.01);

    cout << "-*--*---*---*--*--*" << endl;
    cout << "Opiskelijan Nimi: " << objStudent -> getName() << endl;
    cout << "Opiskelijan Nro: " << objStudent -> getStudentNumber() << endl;
    cout << "Keskiarvo: " << objStudent -> getAverage() << endl;
    cout << "-*--*---*---*--*--*" << endl;

    return 0;
}
