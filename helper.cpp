#include "helper.h"
#include <iostream>
using namespace std;

void Helper::printBalance(Player* P1){
    auto x = P1->getBalance();
        cout << "Black Chips: " << x[BLACK] << " || ";
        cout << "Green Chips: " << x[GREEN] << " || ";
        cout << "Blue Chips: " << x[BLUE] << " || ";
        cout << "Red Chips: " << x[RED] << " || ";
        cout << "White Chips: " << x[WHITE] << endl;

        cout <<  "Total: " << x[BLACK]*BLACK + x[GREEN]*GREEN + x[BLUE]*BLUE + x[RED]*RED +  x[WHITE]*WHITE << endl;
}

void Helper::printCards(Cards* cards){
    for(auto i : cards->getCards()){
        cout << i << " ";
    }
    cout << "\n";
}