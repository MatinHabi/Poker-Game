#ifndef DEALER_H
#define DEALER_H
#include "cards.h"
#include "player.h"
#include <queue>
#include <vector> // Required for returning vector of strings

class Dealer{
protected:
    std::queue<std::string> dealerCards;
public:
    Dealer(Cards* c);

    void dealCards(Player* p);
    
    void resetCards(Cards* c);

    std::vector<std::string> dealCommunityCards(int numCards);
};

#endif