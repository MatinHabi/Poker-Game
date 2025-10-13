#ifndef PLAYER_H
#define PLAYER_H
#include "chips.h"

class Player{
protected:
std::string name;
//vector balance
public:
Player();
Player(std::string name /*, balance = preset */);

std::string getName();

void getBalance(); //std::vector<chips> getBalance();
};





#endif