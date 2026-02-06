#include "player.h"
#include "helper.h"
#include <iostream>
Player::Player(){}
Player::Player(std::string n): name(n){
    chips = {{BLACK, 1}, {GREEN, 2}, {BLUE, 3}, {RED, 4}, {WHITE, 5}};
    balance = Helper::getBalance(this);
}

std::string Player::getName(){return name;}

std::map <Chips, int> Player::getChips(){return chips;}

void Player::recieveCard(std::string x){cards.push_back(x);}

void Player::showHand(){
    if(cards.empty()){
        std::cout << "No cards have been given!\n";
        return;
    }
    for(auto i : cards){
        std::cout << i << " ";
    }
    std::cout << "\n";
    for(auto i : cards){
        cards.pop_back();
    }
}