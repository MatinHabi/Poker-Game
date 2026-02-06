#ifndef HELPER_H
#define HELPER_H
#include "chips.h"
#include "cards.h"
#include "player.h"

class Helper{
public:
    void static printBalance(Player* P1);
    void static printCards(Cards* C);
    int static getBalance(Player* p1);
    int static updateBalance(Player* p1, int amount);
    bool static deckCheck(Cards*C);
};

#endif