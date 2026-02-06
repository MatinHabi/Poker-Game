#ifndef PLAYER_H
#define PLAYER_H
#include "chips.h"
#include <string>
#include <vector>
#include <map>

class Player{
protected:
    std::string name;
    std::map <Chips, int> balance;
    std::vector<std::string> cards;
    friend class Dealer;
public:
    Player();
    Player(std::string name);

    std::string getName();
    
    void recieveCard(std::string);
    
    void showHand();

    std::map<Chips, int> getBalance();
};





#endif