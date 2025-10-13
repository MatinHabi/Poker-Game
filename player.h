#ifndef PLAYER_H
#define PLAYER_H
#include "chips.h"
#include <map>

class Player{
protected:
    std::string name;

    std::map<std::string, int> balance;
public:
    Player();
    Player(std::string name);

    std::string getName();

    std::map<std::string, int> getBalance();
};





#endif