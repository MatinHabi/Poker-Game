#include <iostream>
#include "player.h"
#include "chips.h"
using namespace std;


int main(){
    Player *P1 = new Player("sorren");
    auto x = P1->getBalance();

    cout << P1->getName() << " has ";
    cout << "Black Chips: " << x[BLACK] << " Value: " << x[BLACK]*BLACK << endl;
    cout << "Green Chips: " << x[GREEN] << " Value: " << x[GREEN]*GREEN << endl;
    cout << "Blue Chips: " << x[BLUE] << " Value: " << x[BLUE]*BLUE << endl;
    cout << "Red Chips: " << x[RED] << " Value: " << x[RED]*RED << endl;
    cout << "White Chips: " << x[WHITE] << " Value: " << x[WHITE]*WHITE << endl;

    cout <<  "Total: " << x[BLACK]*BLACK + x[GREEN]*GREEN + x[BLUE]*BLUE + x[RED]*RED +  x[WHITE]*WHITE << endl;
    

}