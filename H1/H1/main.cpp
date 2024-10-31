#include <iostream>
#include <iomanip>
#include "functions.h"
#include "functions.cpp"



using namespace std;

int main()
{
    int a, b;

    cout << "Anna kokonaisluku a: ";
    cin >> a;

    cout << "Anna kokonaisluku b: ";
    cin >> b;

    calcSum(a, b); //Kutsutaan funktio calcSum functions.cpp:sta
    calcDiv(a, b); //Kutsutaan funktio calcSum functions.cpp:sta


    retSum(a, b); //Kutsutaan funktio calcSum functions.cpp:sta
    retDiv(a, b); //Kutsutaan funktio calcSum functions.cpp:sta

    int summa = retSum(a, b);
    float osamaara = retDiv(a, b);

     cout << "Summa (retSum):" << summa << endl;
     cout << "Osamaara(retDiv):" << setprecision(2) << osamaara << endl;


    return 0;
}
