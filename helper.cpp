#include "helper.h"
#include <iostream>
#include <string>
#include <map>
using namespace std;

void Helper::printBalance(Player* P1){
    auto x = P1->getChips();
        cout << "Black Chips: " << x[BLACK] << " || ";
        cout << "Green Chips: " << x[GREEN] << " || ";
        cout << "Blue Chips: " << x[BLUE] << " || ";
        cout << "Red Chips: " << x[RED] << " || ";
        cout << "White Chips: " << x[WHITE] << endl;

        cout <<  "Total: " << x[BLACK]*BLACK + x[GREEN]*GREEN + x[BLUE]*BLUE + x[RED]*RED +  x[WHITE]*WHITE << endl;
}

int Helper::updateBalance(Player* p1, int amount){
    int total = p1->getBalance();
    if(amount > total){
        cout << "Not enough chips to bet that amount!\n";
        return -1;
    }

    while(total > 0){
        while(amount >= BLACK && p1->chips[BLACK] > 0){
            p1->chips[BLACK]--;
            amount -= BLACK;
        }
        while(amount >= GREEN && p1->chips[GREEN] > 0){
            p1->chips[GREEN]--;
            amount -= GREEN;
        }
        while (amount >= BLUE && p1->chips[BLUE] > 0){
            p1->chips[BLUE]--;
            amount -= BLUE;
        }
        while (amount >= RED && p1->chips[RED] > 0){
            p1->chips[RED]--;
            amount -= RED;
        }
        while (amount >= WHITE && p1->chips[WHITE] > 0){
            p1->chips[WHITE]--;
            amount -= WHITE;
        }
        if(amount > 0){
            cout << "Not enough chips to bet that amount!\n";
            return -1;
        }
        total = p1->getBalance();
        p1->balance = total;
        return total;
            
    }


    return 0;
}

int Helper::getBalance(Player* P1){
    auto x = P1->getChips();
    return x[BLACK]*BLACK + x[GREEN]*GREEN + x[BLUE]*BLUE + x[RED]*RED +  x[WHITE]*WHITE;
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