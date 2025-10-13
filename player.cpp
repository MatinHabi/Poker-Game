#include "player.h"
Player::Player(){}
Player::Player(std::string n): name(n){
    
}

std::string Player::getName(){return name;}

std::map<Chips*, int> Player::getBalance(){return balance;}