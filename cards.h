#ifndef CARDS_H
#define CARDS_H
#include <string>
#include <vector>

class Cards{
protected:
    std::vector<std::string> cards;
public:
    Cards();
    std::vector<std::string> getCards();
};


#endif