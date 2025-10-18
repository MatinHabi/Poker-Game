#include <iostream>
#include "helper.h"
using namespace std;


int main(){
    Player *P1 = new Player("sorren");
    Cards *card = new Cards();
    Helper::printBalance(P1);
    Helper::printCards(card);
    card->shuffle();
    //Helper::printCards(card);
}