#ifndef CARDS_H
#define CARDS_H
#include <string>
#include <vector>

class Cards{
protected:
    std::vector<std::string> cards;
    std::vector<std::string> shuffledDeck;
    friend class Dealer;
public:
    Cards();
    std::vector<std::string> getCards();
    std::vector<std::string> getShuffledCards();
    void shuffle();
};


#endif