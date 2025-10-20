#include <iostream>
#include "helper.h"
#include "dealer.h"
using namespace std;


int main(){
    Player *P1 = new Player("matin");
    Cards *card = new Cards();
    Helper::printBalance(P1);
    Helper::printCards(card);
    cout << "shuffled\n";
    card->shuffle();
    Helper::deckCheck(card);
    
    cout << "DEALING CARDS\n";
    Dealer* dealer = new Dealer(card);
    dealer->dealCards(P1);
    cout << "Player show hands:\n";
    P1->showHand();
    
}