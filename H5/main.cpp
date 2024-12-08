#include <iostream>
#include "classb.h"
#include "assosiationa.h"
#include "aggregationa.h"

using namespace std;

int main() {
    // H5 Tehtavä.
    // https://peatutor.com/cplus/harjoitukset/h5.php
    // Vaihe 1 - Osoitteet ja osoittimet
    int a = 5;
    int b = 10;

    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << endl;

    int* myPointer = &a;
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;

    myPointer = &b;
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;

    int& refA = a;
    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    // ***************************************
    // Vaihe 2 - Assosiaatio
    cout << "\n***************************************" << endl;
    cout << "Assosiaatio esimerkki:" << endl;
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAss: " << objAss.getBinfo() << endl;

    // ***************************************
    // Vaihe 3 - Aggregaatio
    cout << "\nAggregaatio esimerkki:" << endl;
    AggregationA objAggr(objB);
    objAggr.setBinfo("Olion Agr asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAggr: " << objAggr.getBinfo() << endl;

    return 0;

 /* Koodin tulos:
    a:n arvo on: 5 ja osoite on: 0x3c1a1ffcac
    b:n arvo on: 10 ja osoite on: 0x3c1a1ffca8
    Pointterin osoittama osoite on: 0x3c1a1ffcac
    Pointterin osoittaman muistipaikan arvo on: 5
    Pointterin osoittama osoite on: 0x3c1a1ffca8
    Pointterin osoittaman muistipaikan arvo on: 10
    refA osoittaa osoitteeseen on: 0x3c1a1ffcac
    refA:n osoittaman muistipaikan arvo on: 5

    ***************************************
    Assosiaatio esimerkki:
    objB: Olion B asettama info
    objAss: Olion objAss asettama info

    Aggregaatio esimerkki:
    objB: Olion Agr asettama info
    objAggr: Olion Agr asettama info
    Press <RETURN> to close this window...
    */
}
