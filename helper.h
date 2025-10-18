#ifndef HELPER_H
#define HELPER_H
#include "chips.h"
#include "cards.h"
#include "player.h"

class Helper{
public:
    void static printBalance(Player* P1);
    void static printCards(Cards* C);
    bool static deckCheck(Cards*C);
};

#endif