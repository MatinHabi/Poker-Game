#ifndef PLAYER_H
#define PLAYER_H
#include "chips.h"
#include <string>
#include <map>

class Player{
protected:
    std::string name;
    std::map<Chips, int> balance;
public:
    Player();
    Player(std::string name);

    std::string getName();

    std::map<Chips, int> getBalance();
};





#endif