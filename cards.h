#ifndef CARDS_H
#define CARDS_H
#include <string>
#include <vector>

class Cards{
protected:
    std::vector<std::string> cards;
    std::vector<std::string> suffledDeck;
public:
    Cards();
    std::vector<std::string> getCards();
    void shuffle();
};


#endif