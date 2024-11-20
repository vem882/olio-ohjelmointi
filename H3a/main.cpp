#include <iostream>
#include <string>
#include "chef.h"
#include "italianchef.h"


using namespace std;

#include "chef.h"

/* Ohjelma tulostaa seuraavan tuloksen:
 * Chef Gordon Ramsay konstruktori
 * Chef Gordon Ramsay makes salad
 * Chef Gordon Ramsay makes soup
 * Chef Anthony Bourdain konstruktori
 * ItalianChef Anthony Bourdain konstruktori
 * Chef Anthony Bourdain makes salad
 * Chef Anthony Bourdain makes soup
 * Italian Chef Anthony Bourdain makes pasta
 * name of the Italian Chef is Anthony Bourdain
 * ItalianChef Anthony Bourdain destruktori
 * Chef Anthony Bourdain destruktori
 * Chef Gordon Ramsay destruktori
 * Press <RETURN> to close this window...
 */


int main() {
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();


    ItalianChef italianChef("Anthony Bourdain");

    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();


    cout << "name of the Italian Chef is " << italianChef.getName() << endl;

    return 0;
}
