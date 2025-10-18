#include <iostream>
#include "helper.h"
using namespace std;


int main(){
    Player *P1 = new Player("sorren");
    Cards *card = new Cards();
    Helper::printBalance(P1);
    Helper::printCards(card);
    // cout << "shuffled\n";
    // card->shuffle();
    // card->shuffle();
    // card->shuffle();
    // card->shuffle();
    // card->shuffle();
    // card->shuffle();
    // card->shuffle();
    // card->shuffle();
    // card->shuffle();
    // card->shuffle();
    // card->shuffle();
    // card->shuffle();
    // card->shuffle();
    // card->shuffle();
    // card->shuffle();
    // Helper::printCards(card);

    Helper::deckCheck(card);
}