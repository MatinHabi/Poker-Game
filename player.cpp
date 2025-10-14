#include "player.h"
Player::Player(){}
Player::Player(std::string n): name(n){
    balance = {{BLACK, 1}, {GREEN, 1}, {BLUE, 1}, {RED, 1}, {WHITE, 1}};
}

std::string Player::getName(){return name;}

std::map<Chips, int> Player::getBalance(){return balance;}