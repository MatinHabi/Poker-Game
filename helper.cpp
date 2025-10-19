#include "helper.h"
#include <iostream>
#include <string>
#include <map>
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

bool Helper::deckCheck(Cards* C){
    auto original = C->getCards();
    auto check = C->getShuffledCards();
    int numCards = 0;
    //testing purposes
    for(auto i : check){
        cout << i << " ";
    }
    cout << "\n";
    //end test
    for(int i = 0 ; i < original.size() ; i++){
        auto temp = original[i];
        for(int j = 0 ; j < check.size() ; j++){
            if(check[j] == temp){
                numCards++;
                break;
            }
        }
    }
    //cout << numCards << "\n";
    if(numCards < original.size()-1){
        cout << "NOT VALID \n";
        return false;
    }
    cout << "Valid!\n";
    return true;
}