#include "player.h"
#include <iostream>
Player::Player(){}
Player::Player(std::string n): name(n){
    balance = {{BLACK, 1}, {GREEN, 2}, {BLUE, 3}, {RED, 4}, {WHITE, 5}};
}

std::string Player::getName(){return name;}

std::map<Chips, int> Player::getBalance(){return balance;}

void Player::showHand(){
    if(cards.empty()){
        std::cout << "No cards have been given!\n";
        return;
    }
    for(auto i : cards){
        std::cout << i << " ";
    }
    std::cout << "\n";
}