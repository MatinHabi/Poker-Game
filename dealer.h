#ifndef DEALER_H
#define DEALER_H
#include "cards.h"
#include "player.h"
#include <queue>
class Dealer{
protected:
std::queue<std::string> dealerCards;
public:
    Dealer(Cards* c);
    void dealCards(Player* p);
    void resetCards(Cards* c);
};

#endif